#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <iostream>

template <typename T>
void CP::queue<T>::move_to_front(size_t pos) {
    //your code here
    
  T tmp ;
  tmp = mData[(mFront+pos)%mCap];
  if (pos == 0 ) return ;
  for (int i = pos ; i < mSize - 1; i++){
    mData[(mFront+i)%mCap] = mData[(mFront+i+1)%mCap] ; 
  }
    mData[(mFront-1)%mCap] = tmp ;
    mFront -= 1 ;
  
}

#endif
