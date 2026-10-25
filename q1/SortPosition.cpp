#include <bits/stdc++.h>

using namespace std ;

int main(){
    int n ,value; 
    cin >> n ;
    map<int,pair<int,int>> order ;
    vector<int> v(n) ;
    for (size_t i = 0; i < n; i++) {
        cin >> value ;
        v[i] = value ;
        if (order.find(value) == order.end()){
            order[value] = {1,1} ;
        } else {
            order[value] = {order[value].first+1,1} ;
        }
    }
    
    for (size_t i = 0; i < n; i++) {
        int count = 0 ;
        for (auto [val , x ] : order){
            if (val != v[i]){
                count += x.first ;
                continue;
            } else {
                cout << count + x.second + 1 << " ";
                order[val] = {x.first, x.second + 1 } ;
                break ;
            }
        }
        
    }
    
}