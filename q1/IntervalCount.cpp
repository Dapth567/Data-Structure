#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main(){
    int n,m,k,value,range;
    vector<int> n_box;
    cin >> n >> m >> k;
    while (n--)
    {
        cin >> value;
        n_box.push_back(value);
    }
    sort(n_box.begin(),n_box.end());
    while (m--){
        cin >> value ;
        auto it1 = lower_bound(n_box.begin(),n_box.end(),value - k);
        auto it2 = upper_bound(n_box.begin(),n_box.end(),value + k);
        range = it2-it1;
        cout << range << " " ;
    }
    
}