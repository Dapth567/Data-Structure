#ifndef __STUDENT_H_
#define __STUDENT_H_
#include <iostream>
#include "vector.h"
#include <vector>
#include <algorithm>
template <typename T>
size_t CP::vector<T>::count_distinct(CP::vector<T>::iterator a, CP::vector<T>::iterator b)
{
    std::vector<T> distinct(a, b);
    std::sort(distinct.begin(), distinct.end());
    size_t count = 0;
    for (size_t i = 0; i < distinct.size(); ++i)
    {
        if (i == 0 || distinct[i] != distinct[i - 1]) {
            ++count;
        }
    }
    return count;
}

#endif