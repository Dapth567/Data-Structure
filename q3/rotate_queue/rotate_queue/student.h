#ifndef __STUDENT_H_
#define __STUDENT_H_

#include "queue.h"

template <typename T>
void CP::queue<T>::rotate(int k) {
  if (mSize == 0){
    return ;
  }
  k = k % mSize;
  if (k == 0 ){
    return ;
  }
  // your code here
}

#endif
