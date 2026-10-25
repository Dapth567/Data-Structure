#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::list<T>::remove_all(const T& value) {
  for (auto it = begin() ; it!= end();it++){
    if((*it) == value){
      node* prev_it = it.ptr->prev ;
      node* next_it = it.ptr->next ;
      prev_it->next = next_it ;
      next_it->prev = prev_it ;
      mSize--;
      delete it.ptr ;
      it.ptr = prev_it ;
    }
  }
  //write your code here
}

#endif
