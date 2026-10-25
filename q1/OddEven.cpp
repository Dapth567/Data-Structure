#include <bits/stdc++.h>

using namespace std ;

int main() {
    int n,value,E=0,O=0 ;
    cin >> n ;
    map<int,int> value_count ;
    while(n--){
        cin >> value ;
        if (value_count.find(value) == value_count.end()){
            value_count[value] = 1 ;
            O++;
        } else {
            value_count[value] += 1 ;
            if (value_count[value]%2 == 0){
                E++;
                O--;
            } else {
                E--;
                O++;
            }
        }
        cout << E << " " << O << endl;
    }
}