#ifndef __STACK_STUDENT_H__
#define __STACK_STUDENT_H__
#include "stack.h"
#include <algorithm>
#include <vector>
template <typename T>
std::vector<std::vector<T>>  CP::stack<T>::split_stack(int k) const {
  std::vector<std::vector<T>> ans(k) ;
  CP::stack<T> tmp ;
  int count , size = mSize ;
  for (int i = 0 ; i < size ; i++){
    count = i % k ;
    if (!empty()){
      ans[count].push_back(top()) ; tmp.push(top()) ; pop() ;
    } else {
      break;
    }
    
  }
  for (int i = 0 ; i < ans.size() ; i++){
    if (ans[i].size() > 1){
      ans[i].reverse() ;
    }
  }
  while(!tmp.empty()){
    push(tmp.top()) ; tmp.pop() ;
  }
  return ans ;
  //your code here
  //should return something
}

#endif

