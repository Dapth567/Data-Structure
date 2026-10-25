#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main(){
    std::ios_base::sync_with_stdio(false); std::cin.tie(0); 
    int n,m,count,low_value,high_value,value;
    cin >> n >> m ;
    vector<pair<int,int>> range_list;
    pair<int,int> range ;
    while(n--){
        cin >> low_value >> high_value ;
        range.first = low_value;
        range.second = high_value ;
        range_list.push_back(range);
    }
    sort(range_list.begin(),range_list.end());
    while(m--){
        cin >> value ;
        range.first = value;
        range.second = INT_MIN;
        auto it = upper_bound(range_list.begin() , range_list.end(), range);
        if(it->first == range.first){
            cout << 1 << " ";
        }else if (it == range_list.begin()){
            cout << 0 << " " ;;
        } else {
            if (prev(it)->first <= range.first && prev(it)->second >= range.first){
                cout << 1 << " ";
            } else {
                cout << 0  << " ";
            }

    }

    }

}
