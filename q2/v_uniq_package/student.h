#ifndef __STUDENT_H_
#define __STUDENT_H_
#include <set>
//you can include any other file here
//you are allow to use any data structure


template <typename T>
void CP::vector<T>::uniq() {
  std::set<int> uniq ;
  T *newData = new T[mSize]();
  int count = 0 ;
  for (int i = 0 ; i < mSize ; i++){
    if (uniq.find((*this)[i]) != uniq.end()){
      count++;
      continue;
    } else {
      newData[i-count] = (*this)[i];
      uniq.insert((*this)[i]) ;
    }
  }
  mSize = mSize - count  ;
  mCap = mSize + 1 ;
  delete[] mData ;
  mData = newData ;
  //do someting here
}

#endif
