#ifndef __STUDENT_H__
#define __STUDENT_H__

template <typename KeyT,
          typename MappedT,
          typename CompareT>
size_t CP::map_bst<KeyT,MappedT,CompareT>::process(node* ptr) const {
  if (ptr == NULL){
    return 0 ;
  }
  if (ptr->right != NULL && ptr->left == NULL){
    return 1 + process(ptr->right);
  }
  if (ptr->right == NULL && ptr->left != NULL){
    return 1 + process(ptr->left) ;
  }
  if (ptr->right == NULL && ptr->left == NULL){
    return 0 ;
  } else {
    return process(ptr->right) + process(ptr->left) ;
  }
  //you may write additional code here
  return 0;
}

template <typename KeyT,
          typename MappedT,
          typename CompareT>
size_t CP::map_bst<KeyT,MappedT,CompareT>::count_unary() const {

  //write your code here
  return process(mRoot);
}

#endif
