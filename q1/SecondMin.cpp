#include <algorithm>
#include <iostream>
#include <stack>
#include <queue>
#include <vector>
#include <set>
#include <map>
#include <list>
using namespace std;
int get_second_min(stack<int> &s) {
    stack<int> two_pair_stack ,s_copy ;
    int value , bottom_stack ;
    s_copy = s ;
    bottom_stack = s_copy.top() ;
    s_copy.pop() ;
    two_pair_stack.push(bottom_stack) ;
    while (s_copy.empty() == false){
        value = s_copy.top();
        s_copy.pop() ;
        if (value > bottom_stack && two_pair_stack.size() == 1){
            two_pair_stack.push(value);
        } else if (value < bottom_stack && two_pair_stack.size() == 1){
            two_pair_stack.pop();
            two_pair_stack.push(value);
            two_pair_stack.push(bottom_stack);
            bottom_stack = value ;
        }
        if (two_pair_stack.size() == 2 && value < bottom_stack){
            two_pair_stack.pop();
            two_pair_stack.pop();
            two_pair_stack.push(value);
            two_pair_stack.push(bottom_stack);
            bottom_stack = value ;
        } else if (two_pair_stack.size() == 2 && value < two_pair_stack.top() && value > bottom_stack){
            two_pair_stack.pop();
            two_pair_stack.push(value);
        }
    }
    return two_pair_stack.top() ;
 
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(0);
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0;i < n;i++) {
        cin >> v[i];
    }
    //repeat n-1 times
    for (int last = 1;last < n;last+=1) {
        stack<int> s;
        //build s;
        bool distinct = false;
        for (int i = last;i >= 0;i--) {
            s.push(v[i]);
            if (v[i] != v[0]) distinct = true;
        }
        cout << "--use v[" << last << "] to v[0] --" << "\n";
        if (distinct) {
            //call get_second_min if we have at least 2 distinct value
            int answer = get_second_min(s);
            //print result and s
            cout << "result is " << answer << "\n";
            cout << "size of s is " << s.size() << "\n" << "member of s are ";
            while(s.size() > 0) {
                cout << s.top() << " ";
                s.pop();
            }
            cout << "\n";
            } else {
                cout << "skip because s has only one value\n\n\n";
            }
    }
    return 0;
}