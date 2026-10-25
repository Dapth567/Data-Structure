#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <vector>
#include <set>
template <typename T>
template <typename Comp>
T CP::queue<T>::min_element(std::vector<size_t> pos,Comp comp) const {

  std::vector<T> all_value ;
  for (int i = 0 ; i < pos.size() ; i++){
    if (pos[i] < mSize){
      all_value.push_back(mData[(mFront+pos[i])%mCap]);
    }
  }
  return *std::min_element(all_value.begin(),all_value.end() , comp) ;

  //your code here


  //should return something
}

#endif
