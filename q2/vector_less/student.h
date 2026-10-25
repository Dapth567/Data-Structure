#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
bool CP::vector<T>::operator<(const CP::vector<T> &other) const {
  int min_num = std::min(mSize,other.mSize) ;
  for (int i = 0 ; i < min_num ; i++){
    if ((*this)[i] < other[i]){
      return true ;
    } else if ((*this)[i] == other[i]){
      continue;
    } else {
      return false ;
    }
  }
  if (mSize < other.mSize){
    return true;
  } else {
    return false ;
  }
  //write your code here
  // if you use std::vector, your score will be half (grader will report score BEFORE halving)
}

#endif
