#include <bits/stdc++.h> 

using namespace std;

int main(){
    int n,m,k,second,acceleration,current_speed,question,velocity,current_second  ;
    cin >> n >> m >> k ;
    map<int,int> second_acceleration,second_velocity,velocity_second;
    while(n--){
        cin >> second >> acceleration ;
        second_acceleration[second] = acceleration ;
    }
    current_speed = k ;
    for (auto it = second_acceleration.begin() ; it!= second_acceleration.end() ; it++){
        if (it == second_acceleration.end()){
            current_speed = 0 ;
        } else {
            current_speed -= it->second;
        }
        current_second = it->first ;
        second_velocity[current_second] = current_speed ;
        velocity_second[current_speed] = current_second ;
    }
    while(m--){
        cin >> question ;
        if (question == 1){
            cin >> second ;
            if ((second_velocity.upper_bound(second)) == second_velocity.begin()){
                cout << k << endl;
            } else if (second_velocity.lower_bound(second)->first == second){
                cout << second_velocity[second] << endl ;
            } else {
                cout << prev(second_velocity.lower_bound(second))->first << endl;
            }
        } else if (question == 2){
            cin >> velocity ;
            if (velocity > k ){
                cout << 0 << endl;
            } else if (velocity == k){
                cout << prev(velocity_second.end())->second << endl;
            } else if (velocity_second.lower_bound(velocity)->first == velocity){
                cout << prev(velocity_second.lower_bound(velocity))->second << endl;
            } else {
                cout << velocity_second.upper_bound(second)->second << endl;
            }
        }
    }
}
