#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
CP::list<T> CP::list<T>::split(iterator it,size_t pos) {
  
  CP::list<T> result;
  if(it == end()){
    return result ;
  }
  size_t initial_mSize = mSize ;
  node* new_last_old_node = it.ptr->prev ;
  node* new_last_result_node = mHeader->prev ;
  node* new_first_result_node = it.ptr ;

  result.mHeader->next = new_first_result_node ;
  new_first_result_node->prev = result.mHeader ;

  result.mHeader->prev = new_last_result_node ;
  new_last_result_node->next = result.mHeader ;

  mHeader->prev = new_last_old_node ;
  new_last_old_node->next = mHeader;

  mSize -= (mSize - pos) ;
  result.mSize = initial_mSize - pos ;

  return result;
}

#endif
