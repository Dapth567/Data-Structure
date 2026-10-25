#ifndef __STUDENT_H_
#define __STUDENT_H_

#include "queue.h"
template <typename T>
void CP::queue<T>::block_remove(size_t from, size_t to) {
    if(mSize - to <= from){
        for (int i = 0 ; i < mSize - to ; i++){
            mData[(mFront+from+i)%mCap] = mData[(mFront+to+1+i)%mCap];
        }
        mSize -= (to-from)+1;
    // Write your code here
    } else {
        int count = 0 ;
        for (int i = from-1; i >= 0 ; i--){
            mData[(mFront+to+count)%mCap] = mData[(mFront+i)%mCap] ;
            count--;
        }
        mFront = (mFront+to+1-from)%mCap;
        mSize -= (to-from)+1;
    }
}
#endif