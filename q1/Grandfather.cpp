
#include <bits/stdc++.h>

using namespace std ;

int grandparent(map<long long,long long>& disjoint_set,long long node){
    if (disjoint_set.find(node) == disjoint_set.end()){
        node = -1 ;
    } else {
        for (size_t i = 0; i < 2; i++)
        {
            if (node == -1){
                break;
            }
            node = disjoint_set[node] ;
        }
    }
    return node ;
}

int main(){
    int n , m ; cin >> n >> m ;
    map<long long,long long> disjoint_set ;
    for (size_t i = 0; i < n; i++) {
        long long father,child ; cin >> father >> child ;
        if (disjoint_set.find(father) == disjoint_set.end()){
            disjoint_set[father] = -1 ;
        }
        disjoint_set[child] = father ;
    }
    for (size_t i = 0; i < m; i++) {
        long long child1 , child2 ; cin >> child1 >> child2 ;
        int p1 = grandparent(disjoint_set,child1) , p2 = grandparent(disjoint_set,child2) ;
        if (child1 != child2 && p1 != -1 && p2 != -1 && p1 == p2) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}