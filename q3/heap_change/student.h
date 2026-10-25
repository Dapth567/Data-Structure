#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <assert.h>

template <typename T,typename Comp>
void CP::priority_queue<T,Comp>::change_value(size_t pos,const T& value) {
  int idx = pos ;
  mData[pos] = value ;
  T tmp = mData[idx];
  size_t c;
  while ((c = 2 * idx + 1) < mSize) {
    if (c + 1 < mSize && mLess(mData[c],mData[c + 1]) ) c++;
    if ( mLess(mData[c],tmp) ) break;
    mData[idx] = mData[c];
    idx = c;
  }
  mData[idx] = tmp;
  fixUp(idx) ;
  //write your code here
}

#endif
