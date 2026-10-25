#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main (){
    ios_base::sync_with_stdio(false); cin.tie(0);
    long long leader,follower,dance_power,count = 0,order = 0 ;
    cin >> leader;
    follower = leader ;
    vector<long long> leader_group;
    vector<long long> couple_power ;
    while(leader--){
        cin >> dance_power;
        leader_group.push_back(dance_power);
    }
    while(follower--){
        cin >> dance_power;
        couple_power.push_back(leader_group[order] - dance_power);
        order++;
    }
    sort(couple_power.begin(),couple_power.end());
    for (auto it = couple_power.begin() ; it != couple_power.end() ; it++){
        auto it1 = upper_bound(next(it),couple_power.end(),-(*it));
        count += distance(it1, couple_power.end());
    }
    cout << count; 
}