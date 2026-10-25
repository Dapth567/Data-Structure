#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int x,n,w,a;
    cin >> n >> w;
    vector<int> v,ans;
    for (int i=0;i<n;i++){
        cin >> x;
        v.push_back(x);
    }
    for (int j = 0 ; j < (n-w) ; j++) {
        auto it = v.begin();
        sort(it+j,it+j+w+1);
        ans.push_back(*(it+j+(w/2)));
    }
    for (auto it : v){

    }
    for (int k = 0 ; k < ans.size() ; k++){
        cout << ans[k] << " ";
    }
}