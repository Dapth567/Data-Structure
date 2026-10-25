#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

int main(){
    int power,n,m,mSize,card_count,round_count = 0 ;
    multiset<int> toe_power;
    cin >> n >> m;
    mSize = m ;
    bool would_you_lose = false; 
    while (n--){
        cin >> power ;
        toe_power.insert(power);
    }
    while (m--){
        if (!would_you_lose){
            round_count++;
        }
        cin >> card_count;
        while(card_count--){
            cin >> power;
            auto it = toe_power.upper_bound(power);
            if (it != toe_power.end()){
                toe_power.erase(it);
            } else {
                would_you_lose = true ;
            }
        }
    }
    if (round_count == mSize && would_you_lose == false){
        cout << round_count + 1;
    } else {
        cout << round_count ;
    }
}