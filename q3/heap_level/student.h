#ifndef __STUDENT_H__
#define __STUDENT_H__

#include <algorithm>
#include <vector>
#include "priority_queue.h"

template <typename T,typename Comp >
std::vector<T> CP::priority_queue<T,Comp>::at_level(size_t k) const {
  //write your code here
  //can include anything
  
  std::vector<T> r;
  int level_size = 1;
  while(k--){
    level_size *= 2 ;
  }
  for (int i = level_size - 1 ; i < (2*(level_size-1))+1 ; i++){
    if (i >= mSize){
      break;
    }
    r.push_back(mData[i]);
  }

  
  sort(r.begin(),r.end(),mLess);
  std::reverse(r.begin(),r.end());
  return r;
}

#endif

