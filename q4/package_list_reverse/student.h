#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template <typename T>
typename CP::list<T>::iterator CP::list<T>::reverse(iterator a, iterator b) {
  auto b_shift = b;
  b_shift--;
  //write your code here
  if (a==b){
    return a;
  }
  auto a_shift = a ;

  while(a_shift != b_shift){
    std::swap((*a_shift),(*b_shift)) ;
    a_shift++;
    if (a_shift == b_shift){
      break;
    }
    b_shift--;
  }
  return a ;
}

#endif
