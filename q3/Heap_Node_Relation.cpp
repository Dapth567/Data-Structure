#include <bits/stdc++.h>

using namespace std ;

int main() {
    int node , relation , a , b;
    cin >> node >> relation ;
    while(relation--){
        cin >> a >> b ;
        if (a < b){
            while (a < b) {
                b = (b - 1) / 2 ;
                if (a == b) {
                    cout << "a is an ancestor of b" << endl;
                    break;
                } else if (b < a){
                    cout << "a and b are not related" << endl;
                }
            }
        } else if (a > b){
            while (b < a) {
                a = (a - 1) / 2 ;
                if (a == b) {
                    cout << "b is an ancestor of a" << endl;
                    break;
                } else if (a < b){
                    cout << "a and b are not related" << endl;
                }
            }
        } else if (a == b){
            cout << "a and b are the same node" << endl ;
        }
    }
}