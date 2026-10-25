#ifndef __STUDENT_H_
#define __STUDENT_H_
#include <algorithm>

template <typename T>
void CP::vector<T>::insert_many(CP::vector<std::pair<int,T>> data) {
  std::sort(data.begin(),data.end()) ;
  T *newData = new T[mSize+data.size()]();
  int count = 0 ;
  for (int i = 0 ; i < mSize + 1; i++){
    if (i == data[count].first) {
      newData[i+count] = data[count].second ;
      count++;
    }
    if (i != data[count].first) {
      newData[i+count] = mData[i] ;
    }
  }
  delete[] mData ;
  mData = newData ;
  mSize = mSize+data.size() ;
  mCap = mSize ;
  //write your code here
}

#endif
