#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::vector<T>::erase_many(const std::vector<int> &pos) {
  T *newData = new T[mCap];
  int count = 0 ;
  for (int i = 0 ; i < mSize ; i++){
    if (count != pos.size()){
      if (i == pos[count]){
        count++ ;
        continue;
      }
    }
    newData[i-count] = (*this)[i];
  }
  delete [] mData ;
  mData = newData ;
  mSize = mSize-count ;
}

#endif
