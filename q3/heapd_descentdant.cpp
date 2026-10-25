#include <bits/stdc++.h>

using namespace std ;

int main(){
    int node ,daddy ,current_son = -1 ,count = 0;
    vector<int> son_list;
    cin >> node >> daddy ;

    if (daddy + 1 <= node){
        son_list.push_back(daddy) ;
    }

    while(current_son < node ){
        if (!son_list.empty()){
            daddy = son_list[count] ;
        }

        current_son = (daddy * 2) +1 ;
        if (current_son + 1 > node){
            break;
        }
        son_list.push_back(current_son);

        current_son = (daddy * 2) +2 ;
        if (current_son + 1 > node){
            break;
        }
        son_list.push_back(current_son);

        count++;
    }


    cout << son_list.size() << endl;
    for (int i = 0 ; i < son_list.size() ; i++){
        cout << son_list[i] << " ";
    }
}