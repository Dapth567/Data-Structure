#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <iostream>
#include <vector>
// you can modify and use this function
template <typename KeyT,
          typename MappedT,
          typename CompareT>
void CP::map_bst<KeyT,MappedT,CompareT>::my_recur(node* n,size_t level,size_t current_level,std::vector<KeyT> &v) {
  if (n == NULL ){
    return ;
  }
  if (current_level != level){
    my_recur(n->left,level,current_level+1,v);
    my_recur(n->right,level,current_level+1,v);
  } else if (current_level == level){
    v.push_back(n->data.first);
  }
  
  //you MAY need to use this function
}

template <typename KeyT,
          typename MappedT,
          typename CompareT>
std::vector<KeyT> CP::map_bst<KeyT,MappedT,CompareT>::at_level(size_t level) {
  std::vector<KeyT> ans ;
  my_recur(mRoot,level,0,ans) ;
  return ans ;
  //write your code here
}


#endif
