#include <bits/stdc++.h>

using namespace std ;

int main() {
    int action,price_amount,price,cook_or_serve,round,restaurant,order = 0,current_price = 0;
    cin >> action  >> price_amount ;
    vector<int> price_goal ;
    priority_queue<int> least_price ;
    map<int,int> price_to_order_amount ;
    while(price_amount--){
        cin >> price ;
        price_goal.push_back(price) ;
    }
    while(action--){
        cin >> cook_or_serve ;
        if (cook_or_serve == 1){
            cin >> restaurant >> price ;
            least_price.push(-price);
        } else if(cook_or_serve == 2){
            order++;
            price = -least_price.top();
            least_price.pop();
            current_price += price ;
            price_to_order_amount[current_price] = order ;
        }
    }
    for (auto it = price_goal.begin() ; it!= price_goal.end() ; it++){
        auto it2 = price_to_order_amount.lower_bound(*it);
        if (it2 == price_to_order_amount.end()){
            cout << -1 << " ";
        } else {
            cout << it2->second << " " ;
        }
    }
}