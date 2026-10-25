#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <vector>
#include "queue.h"
#include <algorithm>
template <typename T>
void CP::queue<T>::remove_many(std::vector<size_t> pos)
{
  sort(pos.begin(),pos.end()) ;
  int count = 0 ,round = 0 , size_q = size();
  while(round != size_q){
    if (pos[count] == round){
      pop();
      count++;
    } else {
      push(front()) ; pop() ;
    }
    round++ ;
  }
  
  // your code here
}

#endif
