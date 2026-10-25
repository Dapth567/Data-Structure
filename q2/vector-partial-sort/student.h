#ifndef __STUDENT_H_
#define __STUDENT_H_
#include <vector>
#include <algorithm>
//can include anything
template <typename T>
template <typename CompareT>
void CP::vector<T>::partial_sort(std::vector<iterator> &pos,CompareT  comp) {
  std::vector<iterator> pos_sort ;
  std::vector<int> int_sort ;
  for (int i = 0 ; i < pos.size() ; i++){
    pos_sort.push_back(pos[i]) ;
    int_sort.push_back(*pos[i]) ;
  }
  std::sort(pos_sort.begin(),pos_sort.end()) ;
  std::sort(int_sort.begin(),int_sort.end(),comp) ;
  for (int i = 0 ; i < pos.size() ; i++){
    *pos_sort[i] = int_sort[i] ;
  }
  // Write code here
  // you can compare two data A and B of type T by calling comp(A,B)
  // which return true when A is less than B
}

#endif
