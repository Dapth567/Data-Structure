#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <vector>
#include <stack>
#include <queue>
#include <list>
#include <set>
#include <map>
#include <string>

using std::string;

void change_1(std::stack<std::vector<std::queue<int>>> &a, int from, int to)
{
    std::stack<std::vector<std::queue<int>>> tmp_stack ;
    std::vector<std::queue<int>> tmp_vec ;
    int value ;
    while(!a.empty()){
        tmp_vec = a.top() ; a.pop() ;
        for (int i = 0 ; i < tmp_vec.size() ; i++){
            int count = 0 ;
            while (tmp_vec[i].size() != count){
                value = tmp_vec[i].front() ; tmp_vec[i].pop() ;
                if (value == from){
                    tmp_vec[i].push(to) ;
                } else {
                    tmp_vec[i].push(value);
                }
            }
        }
    }
    // your code here
}

void change_2(std::map<string, std::pair<std::priority_queue<int>, int>> &a, int from, int to)
{
    std::stack<int> tmp ;
    for (auto [s,p] : a){
        while (!(p.first.empty()) && p.first.top() >= from){
            if (p.first.top() == from){
                p.first.pop(); tmp.push(to);
            } else if (p.first.top() > from) {
                tmp.push(p.first.top()) ; p.first.pop() ;
            }
        }
        while(!tmp.empty()){
            p.first.push(tmp.top()) ; tmp.pop() ;
        }
        if (p.second == from){
            p.second = to ;
        }
    }
    // your code here
}

void change_3(std::set<std::pair<std::list<int>, std::map<int, std::pair<int, string>>>> &a, int from, int to)
{
    
    // your code here
}

#endif
