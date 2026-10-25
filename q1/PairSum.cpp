#include <bits/stdc++.h>
#include <algorithm>
using namespace std ;

int main() {
    int n,m,value,start,end ;
    cin >> n >> m;
    vector<int> n_box,m_box;
    while (n--){
        cin >> value ;
        n_box.push_back(value);
    }
    sort(n_box.begin(),n_box.end());
    while (m--){
        cin >> value ;
        start = 0;
        end = n_box.size() - 1 ;
        while(true){
            if (start == end){
                cout << "NO" << endl;
                break;
            } else if (n_box[start] + n_box[end] > value){
                end--;
            } else if (n_box[start] + n_box[end] < value){
                start++;
            } else {
                cout << "YES" << endl ;
                break;
            }
        }
    }

}