#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::stack<T>::deep_push(size_t pos,const T& value) {
  int count = 0 ;
  CP::stack<T> tmp ;
  while(!empty() && count != pos){
    tmp.push(top()) ; pop();
    count++;
  }
  push(value);
  while(!tmp.empty()){
    push(tmp.top()) ; tmp.pop() ;
  }
  //write your code here
}

#endif
