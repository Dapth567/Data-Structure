#ifndef _CP_STUDENT_QUEUE_INCLUDED_
#define _CP_STUDENT_QUEUE_INCLUDED_

#include <stdexcept>
#include <iostream>
//#pragma once
#include <vector>
#include <queue>
#include "queue.h"

template <typename T>
std::vector< CP::queue<T> > CP::queue<T>::split_queue(int k) {
    std::vector<CP::queue<T> > qs(k);
    int origin_size = size();
    for (int i = 0 ; i < origin_size ; i++){
        if (!empty()){
            qs[i%k].push(mData[mFront]) ; pop() ;
        }
        
    }
    // code here
    //
    //
    //
    //
    //
    //
    //
    return qs;
}

#endif

