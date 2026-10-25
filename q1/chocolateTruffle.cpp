#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main(){
    int r,c,q,max_tile,ask,location,max_r,max_c ;
    cin >> max_r >> max_c >> q;
    vector<int> choc_location ;
    max_tile = max_r*max_c ;
    while(q--){
        cin >> r >> c ;
        location =  max_c*(r-1) + c;
        choc_location.push_back(location);
    }
    sort(choc_location.begin(),choc_location.end()) ;
    cin >> ask ;
    while(ask--){
        cin >> r >> c ;
        location = (max_c*(r-1)) + c;
        auto it = lower_bound(choc_location.begin(),choc_location.end(),location);
        if(*it == location){
            cout << 0 << endl;
        } else if (it != choc_location.end()){
            cout << *it - location << endl ;
        } else {
            cout << (max_tile-location) + *choc_location.begin() << endl;
        }
    }
}
