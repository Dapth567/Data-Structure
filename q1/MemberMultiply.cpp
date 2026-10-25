#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void member_multiply(vector<int> &v, vector<pair<vector<int>::iterator,int>> &multiply) {
    int value,round ;
    vector<int> tmp_v ;
    vector<pair<vector<int>::iterator,int>> find_it;
    for (auto it = v.begin() ; it!= v.end() ; it++){
        value = *it ;
        tmp_v.push_back(value);
        if (lower_bound(multiply.begin(),multiply.end(),find_it)->first == it){
            auto it2 =lower_bound(multiply.begin(),multiply.end(),it);
            round = it2->second ;
            while(round--){
                tmp_v.push_back(value);
            }
        }
    }
    v = tmp_v ;
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(0);
    int n,m;
    cin >> n >> m;
    vector<int> v(n);
    vector<pair<vector<int>::iterator,int>> multiply(m);
    for (int i = 0;i < n;i++) cin >> v[i];
    for (int i = 0;i < m;i++) {
    int a,b;
    cin >> a >> b;
    multiply[i].first = v.begin()+a;
    multiply[i].second = b;
    }
    member_multiply(v,multiply);
    cout << "======= result ========" << endl;
    cout << v.size() << endl;
    for (auto &x : v) {
    cout << x << " ";
    }
    cout << endl;
}