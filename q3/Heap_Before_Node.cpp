#include <bits/stdc++.h>

using namespace std;

int main(){
    int node , idx , current_son , daddy , count = 0;
    cin >> node >> idx ;
    vector<int> son_list ;
    son_list.push_back(idx);

    while (true){
        daddy = son_list[count];

        current_son = (daddy*2) + 1 ;
        if (current_son >= node){
            break;
        }
        son_list.push_back(current_son);
        current_son = (daddy*2) + 2 ;
        if (current_son >= node){
            break;
        }
        son_list.push_back(current_son);

        count++ ;
    }

    count = 0 ;

    cout << node - son_list.size() << endl;
    for (int i = 0 ; i < node ; i++){
        if (son_list[count] == i){
            count++;
            continue;
        } else {
            cout << i << " ";
        }
    }

}