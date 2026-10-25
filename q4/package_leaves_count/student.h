#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <iostream>

// you can modify and use this function
template <typename KeyT,
          typename MappedT,
          typename CompareT>
size_t CP::map_bst<KeyT,MappedT,CompareT>::leaves_count(node* n) {
  
  if (n == NULL){
    return 0 ;
  }

  if (n->left == NULL && n->right == NULL){
    return 1 ;
  } 

  if (n != NULL){
    return leaves_count(n->right) + leaves_count(n->left) ;
  }

}


template <typename KeyT,
          typename MappedT,
          typename CompareT>
size_t CP::map_bst<KeyT,MappedT,CompareT>::leaves_count() {

  return leaves_count(mRoot);
  //write your code here
}


#endif
