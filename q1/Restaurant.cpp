#include <bits/stdc++.h>

using namespace std ;

int main() {
    int table,customer,chef_work_time,count = 0 ;
    cin >> table >> customer ;
    priority_queue<pair<int,int>> all_table_time;
    pair<int,int> each_table ;
    while(count != customer){
        while(table--){
            cin >> chef_work_time ;
            all_table_time.push({0,chef_work_time});
        }
        while(count != customer){
            each_table = all_table_time.top();
            all_table_time.pop();
            cout << -each_table.first << endl;
            count++;
            each_table.first -= each_table.second ;
            all_table_time.push(each_table);
        }
    }
}