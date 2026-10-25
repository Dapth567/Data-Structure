#include <bits/stdc++.h>

using namespace std ;

int main() {
    int n ,action , space = 1 , member_count = 0 , action_num;
    cin >> n ;
    while (n--){
        cin >> action >> action_num;
        if (action == 0){ // push
            member_count += action_num ;
            while(space < member_count){
                space *= 2 ;
            }
        } else { //pop
            member_count -= action_num ;
        }
    }
    cout << space - member_count ;
}