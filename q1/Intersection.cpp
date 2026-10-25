#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n,m,value,last_Value;
    int count = 0,ncount = 0,mcount = 0 ;
    vector<int> N,M,ans;
    cin >> n >> m;
    while(n--){
        cin >> value;
        N.push_back(value);
    }
    sort(N.begin(),N.end());
    while(m--){
        cin >> value;
        M.push_back(value);
    }
    sort(M.begin(),M.end());
    while (ncount != N.size() && mcount != M.size()){
        if (N[ncount] == M[mcount]){
            if (ans.size() == 0){
                ans.push_back(N[ncount]);
                last_Value = N[ncount];
                ncount++;
                mcount++;
            } else if (N[ncount] == last_Value){
                ncount++;
                mcount++;
            } else {
                ans.push_back(N[ncount]);
                last_Value = N[ncount];
                ncount++;
                mcount++;
            }
        } else if (N[ncount] > M[mcount]){
            mcount++;
        } else if (N[ncount] < M[mcount]){
            ncount++;
        }
    }
    for (int i = 0 ; i<ans.size() ; i++ ){
        cout << ans[i] << " ";
    }
}