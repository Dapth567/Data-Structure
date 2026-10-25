#include <iostream>
#include <vector>
using namespace std;

vector<string> punch(vector<string> &v, vector<string>::iterator it,int k) { 
    vector<string>::iterator it1,it2;
    if (it - v.begin() < k) {
        it1 = v.begin();
    } else {
        it1 = it-k;
    }
    if (v.end() - it <= k){
        it2 = v.end();
    } else {
        it2 = it+k+1;
    }
    v.erase(it1,it2);
    return v;
}
int main() {
    int n,j,k;
    cin >> n >> j >> k;
    vector<string> v(n);
    for (int i = 0;i < n;i++) {
    cin >> v[i];
    }
    cout << "Result after punch" << endl;
    vector<string> result = punch(v, v.begin() + j, k);
    for (auto &x : result) {
    cout << x << endl;
    }
}