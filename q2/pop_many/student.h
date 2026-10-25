#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::stack<T>::multi_pop(size_t K) {
  int count = 0 ;
  while (!empty() && count != K){
    pop(); count ++ ;
  }
  //write your code here
}

template <typename T>
std::stack<T> CP::stack<T>::remove_top(size_t K) {
  std::stack<T> tmp , ans ;
  int count = 0 ;
  while (!empty() && count != K){
    tmp.push(top()) ;pop(); count ++ ;
  }
  while(!tmp.empty()){
    ans.push(tmp.top()) ; tmp.pop() ;
  }
  return ans ;
  //write your code here
  //
  //don't forget to return an std::stack
}

#endif
