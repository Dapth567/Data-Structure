#ifndef __STACK_STUDENT_H__
#define __STACK_STUDENT_H__
#include "stack.h"

//DO NOT INCLUDE ANYTHING


template <typename T>
CP::stack<T>::stack(typename std::set<T>::iterator first,typename std::set<T>::iterator last) {

  int data_size ;
  data_size = std::distance(first,last);
  int count = 0;
  T *newData = new T[data_size]();
  mCap = data_size ;
  mSize = data_size ;

  for (auto it = first ; it != last ; it++){
    newData[count] = *it ;
    count++;
  }

  delete[] mData ;
  mData = newData;
  
  //write your code ONLY here
}

#endif
