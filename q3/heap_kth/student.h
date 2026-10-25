#ifndef __STUDENT_H__
#define __STUDENT_H__

#include <algorithm>
#include <vector>
#include "priority_queue.h"
using namespace std ;
template <typename T,typename Comp >
T CP::priority_queue<T,Comp>::get_kth(size_t k) const {
  if (k == 1){
    return mData[0];
  } else if (k == 2){
    if( mLess(mData[1],mData[2]) ){
      return mData[2];
    } else {
      return mData[1];
    }
  } else if (k == 3){
    vector<T> tmp ;
    if (mLess(mData[1],mData[2])){
      tmp.push_back(mData[1]);
      tmp.push_back(mData[5]);
      tmp.push_back(mData[6]);
      sort(tmp.begin(),tmp.end(),mLess);
    } else {
      tmp.push_back(mData[2]);
      tmp.push_back(mData[3]);
      tmp.push_back(mData[4]);
      sort(tmp.begin(),tmp.end(),mLess);
    }
    return tmp[0];
  }
  
  //write your code here
  //can include anything
}

#endif
