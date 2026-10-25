#ifndef __STUDENT_H_
#define __STUDENT_H_

#include "queue.h"

template <typename T>
void CP::queue<T>::block_insert(size_t p, size_t m, const T &element)
{
	ensureCapacity(mSize+m) ;
    if(p <= mSize - p){
        for (int i = 0 ; i < p ; i++){
            mData[(mFront-m+i+mCap)%mCap] = mData[(mFront+i)%mCap];
        }
        for (int i = 0 ; i < m ; i++){
            mData[(mFront+p-i-1+mCap)%mCap] = element ;
        }
        mFront = (mFront-m+mCap)%mCap ;
        mSize += m ;
    } else {
        for (int i = 0 ; i < mSize - p ; i++){
            mData[(mFront+mSize-1+m-i)%mCap] = mData[(mFront+mSize-i-1)%mCap];
        }
        for (int i = 0 ; i < m ;i++){
            mData[(mFront+p+i)%mCap] = element ;
        }
        mSize += m ;
    }
}

#endif
