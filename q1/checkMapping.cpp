#include <iostream>
#include <set>

using namespace std;

int main(){
    int n,m,x,count = 1,search = 0;
    cin >> n;
    m = n;
    pair<int,int> duo ;
    set<pair<int,int>> duoset ;
    while (n--){
        cin >> x ;
        duo.first  = count ; 
        duo.second = x ;
        if (duoset.find(duo) == duoset.end()){
            duoset.insert(duo);
        } else if (duoset.find(duo) != duoset.end()){
            cout << "NO" ;
            search = 1 ;
            break;
        }
    }
    if (search == 0){
        cout << "YES" ;
    }
}