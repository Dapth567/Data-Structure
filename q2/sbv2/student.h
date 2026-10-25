#ifndef __STUDENT_H_
#define __STUDENT_H_

#include "stack.h"
#include <iostream>

template <typename T>
size_t CP::stack<T>::size() const {
  return v.size() ;
  //write your code here
}

template <typename T>
const T& CP::stack<T>::top() const {
  return *(v.end()-1) ;
  //write your code here
}

template <typename T>
void CP::stack<T>::push(const T& element) {
  v.push_back(element) ;
  //write your code here
}

template <typename T>
void CP::stack<T>::pop() {
  v.pop_back() ;
  //write your code here
}

template <typename T>
void CP::stack<T>::deep_push(const T& element, int depth) {
  CP::stack<T> tmp ;
  while(!empty() && depth--){
    tmp.push(top()) ; pop() ;
  }
  push(element);
  while(!tmp.empty()){
    push(tmp.top()) ; tmp.pop() ;
  }
  //write your code here
}

template <typename T>
void CP::stack<T>::multi_push(const std::vector<T> &w) {
  for (T value : w){
    push(value) ;
  }
  //write your code here
}

template <typename T>
void CP::stack<T>::pop_until(const T& e) {
  while(!empty() && top() != e){
    pop() ;
  }
  //write your code here
}

#endif

