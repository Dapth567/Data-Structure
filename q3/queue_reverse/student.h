#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <cassert>

template <typename T>
void CP::queue<T>::reverse(int a,int b) {
  for(int i = 0 ; i < (b - a + 1 )/2; i++){
    std::swap(mData[(mFront+a+i)%mCap] , mData[(mFront+b-i)%mCap]);
  }
  //your code here
}

#endif
