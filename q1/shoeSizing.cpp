#include <bits/stdc++.h>
using namespace std;

int main(){
    int shoes , customers , shoe_size , customer_foot_size;
    cin >> shoes >> customers ;
    set<int> shoes_size_list ;
    vector<int> perfected_size ;
    while(shoes--){
        cin >> shoe_size ;
        shoes_size_list.insert(shoe_size);
    }
    while(customers--){
        cin >> customer_foot_size ;
        auto it = shoes_size_list.lower_bound(customer_foot_size);
        if (it == shoes_size_list.begin()){
            it = it ;
        } else if (it == shoes_size_list.end()){
            it = prev(it);
        } else if (abs((*prev(it)) - customer_foot_size) < abs((*it) - customer_foot_size) ) {
            it = prev(it);
        }
        perfected_size.push_back(*it);
    }
    for (auto it = perfected_size.begin() ; it != perfected_size.end() ; it++){
        cout << *it << " " ;
    }
}