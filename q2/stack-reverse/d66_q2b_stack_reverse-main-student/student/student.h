#ifndef __STUDENT_H_
#define __STUDENT_H_

#include "stack.h"

template <typename T>
void CP::stack<T>::reverse(size_t first, size_t last){
	// write your code here3
	if (first < 0) first = 0 ;
	if (last < 0 ) last = 0 ;
	if (first > mSize) first = mSize ;
	if (last > mSize) last = mSize ;
	if (last <= first){
		return ;
	} 
	stack<T> tmp,reverse ;
	int count = 0 ;
	T value ;
	while (count != last + 1){
		if (count >= first && count <= last){
			value = top() ; pop() ;
			reverse.push(value);
			count++ ;
		} else {
			value = top() ; pop() ;
			tmp.push(value);
			count++ ;
		}
	}
	while(!reverse.empty()){
		tmp.push(reverse.top()) ; reverse.pop();
	}
	while(!tmp.empty()){
		push(tmp.top()) ; tmp.pop() ;
	}
	return ;
}

#endif
