#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <iostream>

//you can use this function
template <typename KeyT,
          typename MappedT,
          typename CompareT>
int CP::map_bst<KeyT,MappedT,CompareT>::shallowest_leaf(node* n) {
  if (n == NULL){
    return -1 ;
  }
  if (n->right != NULL && n->left == NULL){
    return 1 + shallowest_leaf(n->right) ;
  }
  if (n->right == NULL && n->left != NULL){
    return 1 + shallowest_leaf(n->left) ;
  }
  if (true)
  return 1 + std::min(shallowest_leaf(n->left),shallowest_leaf(n->right));
  
}

template <typename KeyT,
          typename MappedT,
          typename CompareT>
int CP::map_bst<KeyT,MappedT,CompareT>::shallowest_leaf() {
  return shallowest_leaf(mRoot);
  //write your code here
}


#endif
