#include "stack.h"
#include "queue.h"

namespace CP {
    template<typename T>
    void stack<T>::appendStack(stack<T> s) {  //ss     ss
        T *newData = new T[s.mSize+mSize]() ;
        for (int i = 0 ; i < s.mSize ; i++){
            newData[i] = s.mData[i] ;
        }
        for (int i = s.mSize ; i < mSize + s.mSize ; i++){
            newData[i] = mData[i-s.mSize] ;
        }        
        mSize = s.mSize + mSize ;
        mCap = mSize ;
        delete[] mData ;
        mData = newData ;
    }

    template<typename T>
    void stack<T>::appendQueue(queue<T> q) {   //sq    qq
        CP::stack<T> tmp ;
        while(!empty()){
            tmp.push(top()) ; pop();
        }
        while(!q.empty()){
            tmp.push(q.front()) ; q.pop() ;
        }
        while(!tmp.empty()){
            push(tmp.top()) ; tmp.pop() ;
        }
    }

    template<typename T>
    void queue<T>::appendStack(stack<T> s) {  //qs     sq
        while(!s.empty()){
            push(s.top()) ; s.pop();
        }
    }
    template<typename T>
    void queue<T>::appendQueue(queue<T> q) { //qq      qs

        while(!q.empty()){
            push(q.front()) ; q.pop() ;
        }
    }
}
