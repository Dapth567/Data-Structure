#ifndef _STUDENT_H_INCLUDED
#define _STUDENT_H_INCLUDED
#include "queue.h"
template <typename T>
void CP::queue<T>::reverse() {
  if (aux % 2 == 0){
    mFront = (mFront+mSize-1)%mCap ;
  } else {
    mFront = (mFront+mCap-mSize+1)%mCap ;
  }
  aux += 1 ;
  // Your code here
}

template <typename T>
const T& CP::queue<T>::front() const {
  // You MAY need to edit this function
  return mData[mFront];
}

template <typename T>
const T& CP::queue<T>::back() const {
    // You MAY need to edit this function
    if (aux % 2 == 0){
      return mData[(mFront + mSize - 1) % mCap];
    } else {
      return mData[(mFront + mCap - mSize + 1) % mCap];
    }
}

template <typename T>
void CP::queue<T>::push(const T& element) {
  // You MAY need to edit this function
  if (aux % 2 == 0){
    ensureCapacity(mSize + 1);
    mData[(mFront + mSize) % mCap] = element;
    mSize++;
  } else {
    if (mCap == mSize){
      T *newData = new T[1+mSize]() ;
      for (int i = 0 ; i < mSize ; i++){
        newData[i] = mData[(mFront-i+mCap)%mCap];
      }
      newData[mSize] = element ;
      mFront = 0 ;
      aux = 0 ;
      mCap = 1+mSize ;
      mSize += 1 ;
      delete[] mData ;
      mData = newData ;
    } else {
      mData[(mFront+mCap-mSize)%mCap] = element ;
    }
    mSize++;
  }
}

template <typename T>
void CP::queue<T>::pop() {
  // You MAY need to edit this function
  if (aux%2 == 0){
    mFront = (mFront + 1) % mCap;
    mSize--;
  } else {
    mFront = (mFront + mCap - 1) % mCap ;
    mSize--;
  }
}

#endif