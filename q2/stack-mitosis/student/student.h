#ifndef __STACK_STUDENT_H__
#define __STACK_STUDENT_H__
#include "stack.h"

template <typename T>
void CP::stack<T>::mitosis(int a, int b)
{
    int count = 0 ;
    CP::stack<T> tmp ;
    while (!empty() && count <= b){
        if (count < a){
            tmp.push(top()) ; pop() ;
        } else {
            tmp.push(top()) ; tmp.push(top()) ; pop() ;
        }
        count++;
    }
    while(!tmp.empty()){
        push(tmp.top()) ; tmp.pop() ;
    }
}

#endif


