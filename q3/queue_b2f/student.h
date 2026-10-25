#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <iostream>


template <typename T>
void CP::queue<T>::back_to_front() {

  if (mFront == 0){
    mData[mCap-1] = back();
    mFront = mCap - 1 ;
  } else {
    mData[mFront-1] = back();
    mFront -= 1 ;
  }
  //write your code here
}

#endif
