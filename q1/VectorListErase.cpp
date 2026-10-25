#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;
void list_erase(vector<int> &v, vector<int> &pos) {
    sort(pos.begin(),pos.end());
    int count = 0 ;
    vector<int> new_v ;
    for (auto it = v.begin() ; it != v.end() ; it++){
        if (*lower_bound(pos.begin(),pos.end(),count) != count){
            new_v.push_back(*it);
        }
        count++;
    }
    v = new_v ;
}
int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,m;
    cin >> n >> m;
    vector<int> v(n), pos(m);
    for (int i = 0;i < n;i++) cin >> v[i];
    for (int i = 0;i < m;i++) cin >> pos[i];
    list_erase(v,pos);
    cout << "After call list_erase" << endl << "Size = " << v.size() << endl;
    for (auto &x : v) cout << x << " ";
    cout << endl;
}