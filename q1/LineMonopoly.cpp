#include <bits/stdc++.h>

using namespace std ;

int main() {
    int n,quest,value;
    pair<int,string> gap ;
    set<pair<int,string>> all_gap ;
    cin >> n ;
    while(n--){
        cin >> quest ;
        if (quest == 1) {
            cin >> value ;
            gap = {value,"a_open"};
            all_gap.insert(gap);
            cin >> value ; 
            gap = {value,"b_close"};
            all_gap.insert(gap);
        } else if (quest == 2){
            for (auto it = all_gap.begin() ; it != all_gap.end() ; it++) {
                
            }
        }
    }
}