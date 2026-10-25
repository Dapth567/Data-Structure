#ifndef __STUDENT_H_
#define __STUDENT_H_

using namespace std;

template <typename T,typename Comp>
size_t CP::priority_queue<T,Comp>::get_rank(size_t pos) const {
  T value ;
  int count = 0 ;
  value = mData[pos] ;
  for (int i = 0 ; i < mSize ; i++){
    if (mLess(value,mData[i])){
      count++;
    }
  }
  return count ;
  //write your code here
}

#endif
