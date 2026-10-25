#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::vector<T>::rotate(iterator first, iterator last, size_t k) {
  if (last - first == 0 || k == 0) {
    return ;
  }
  T *newData = new T[mSize]() ;
  int count = 0 ;
  for (CP::vector<T>::iterator it : this){
    if (it < first) {
      newData[count] = *it ; 
    } else if (it >= first && it <= last) {
      if (it + k > end()){
        
      }
      newData[count] = 
    }
    count++;
  }
  //write your code here
}

#endif
