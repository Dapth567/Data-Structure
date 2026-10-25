#ifndef __STUDENT_H_
#define __STUDENT_H_

#include "stack.h"
#include <stack>
template <typename T>
void CP::stack<T>::pop() {
	// modify method here
	std::stack<T> tmp ;
	if (stack_a.empty()) {
		if (!stack_b.empty()){
			while(tmp.size() < stack_b.size()){
				tmp.push(stack_b.top()) ; stack_b.pop() ;
			}
			while(!tmp.empty()){
				stack_a.push(tmp.top()) ; tmp.pop() ;
			}
			while (!stack_b.empty()){
				tmp.push(stack_b.top()) ; stack_b.pop() ;
			}
			stack_b = stack_a ;
			stack_a = tmp ;
		}
	}

	stack_a.pop();
}

template <typename T>
const T& CP::stack<T>::top() {
	std::stack<T> tmp ;
	if (stack_a.empty()) {
		if (!stack_b.empty()){
			while(tmp.size() < stack_b.size()){
				tmp.push(stack_b.top()) ; stack_b.pop() ;
			}
			while(!tmp.empty()){
				stack_a.push(tmp.top()) ; tmp.pop() ;
			}
			while (!stack_b.empty()){
				tmp.push(stack_b.top()) ; stack_b.pop() ;
			}
			stack_b = stack_a ;
			stack_a = tmp ;
		}
	}


	// modify method here
	return stack_a.top();
}

template <typename T>
const T& CP::stack<T>::bottom() {
	std::stack<T> tmp ;
	if (stack_b.empty()) {
		if (!stack_a.empty()){
			while(tmp.size() < stack_a.size()){
				tmp.push(stack_a.top()) ; stack_a.pop() ;
			}
			while(!tmp.empty()){
				stack_b.push(tmp.top()) ; tmp.pop() ;
			}
			while (!stack_a.empty()){
				tmp.push(stack_a.top()) ; stack_a.pop() ;
			}
			stack_a = stack_b ;
			stack_b = tmp ;
		}
	}
	return stack_b.top() ;
	// write your code here
	
}

template <typename T>
void CP::stack<T>::push_bottom(const T& element) {
	stack_b.push(element) ;
	// write your code here

}

template <typename T>
void CP::stack<T>::pop_bottom() {
	std::stack<T> tmp ;
	if (stack_b.empty()) {
		if (!stack_a.empty()){
			while(tmp.size() < stack_a.size()){
				tmp.push(stack_a.top()) ; stack_a.pop() ;
			}
			while(!tmp.empty()){
				stack_b.push(tmp.top()) ; tmp.pop() ;
			}
			while (!stack_a.empty()){
				tmp.push(stack_a.top()) ; stack_a.pop() ;
			}
			stack_a = stack_b ;
			stack_b = tmp ;
		}
	}

	stack_b.pop() ;
	// write your code here

}
#endif