#include <bits/stdc++.h>

using namespace std;

int main(){
    int sheep_location,day,sheep_amount,wolf_location;
    cin >> sheep_amount;
    set<int> sheep_in_map ;
    while (sheep_amount--){
        cin >> sheep_location ;
        sheep_in_map.insert(sheep_location);
    }
    cin >> day ;
    while (day--){
        cin >> wolf_location;
        auto it1 = sheep_in_map.lower_bound(wolf_location);
        if (it1 == sheep_in_map.begin()){
            cout << abs((*it1)-wolf_location) << endl;
        } else if (it1 == sheep_in_map.end()){
            cout << abs((*(prev(it1))) - wolf_location) << endl;
        } else {
            auto it2 = prev(it1);
            if (abs((*it2) - wolf_location) < abs((*it1) - wolf_location)){
                cout << abs((*it2) - wolf_location) << endl;
            } else {
                cout << abs((*it1) - wolf_location) << endl;
            }
        }
    }
}