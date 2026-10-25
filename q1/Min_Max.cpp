#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int main (){
    int row,column,total_Find,cord_Value;
    pair<int,int> cord;
    map<pair<int,int>,int> cord_Map;
    cin >> row >> column;
    cin >> total_Find;
    for (int i = 1 ; i <= row ; i++){
        for (int j = 1 ; j <= column ; j++ ){
            cin >> cord_Value;
            cord.first = i;
            cord.second = j;
            cord_Map[cord] = cord_Value;
        }
    }

    int r1,c1,r2,c2 ;
    
    while(total_Find--){
        int max_Value;
        cin >> r1 >> c1 >> r2 >> c2 ;
        if (r2 < r1 || c2 < c1){
            cout << "INVALID" << endl;
        } else if (r1 > row || c1 > column ){
            cout << "OUTSIDE" << endl;
        } else if (r1 == r2 && c1 == c2 ){
            cord.first = r1;
            cord.second = c1;
            cout << cord_Map[cord] << endl ;
        } else {
            r2 = min(r2,row);
            c2 = min(column,c2);
            for (int i = r1 ; i <= r2 ; i++){
                for (int j = c1 ; j <= c2 ; j++){
                    cord.first = i;
                    cord.second = j;
                    if (i == r1 && j == c1){
                        max_Value = cord_Map[cord];
                    } else {
                        max_Value = max(cord_Map[cord],max_Value);
                    }
                   
                }
            }
            cout << max_Value << endl;
        }
    }
}