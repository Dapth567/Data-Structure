#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::vector<T>::mirror() {
  T *newData = new T[2*mSize]() ;
  for (int i = 0 ; i < mSize ; i++){
    newData[i] = mData[i] ;
    newData[(2*mSize) - i - 1] = mData[i] ;
  }
  delete[] mData ;
  mData = newData ;
  mSize = 2*mSize ;
  mCap = mSize ;
  //write your code here
}

#endif
