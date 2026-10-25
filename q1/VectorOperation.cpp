#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n,x,j;
    int i = 0;
    string command;
    vector<int> v;
    cin >> n;
    while (i<n) {
        cin >> command;
        if (command == "pb"){
            cin >> x;
            v.push_back(x);
        }
        if (command == "sa"){
            sort(v.begin(), v.end());
        }
        if (command == "sd"){
            sort(v.begin(), v.end());
            reverse(v.begin(),v.end());
        }
        if (command == "r"){
            reverse(v.begin(),v.end());
        }
        if (command == "d"){
            cin >> j;
            v.erase(v.begin()+j);
        }
        i++;
    }
    for (int d=0 ; d < v.size(); d++){
        cout << v[d] << " " ;
    }
}