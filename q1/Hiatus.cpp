#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int main(){
    std::ios_base::sync_with_stdio(false); std::cin.tie(0); 
    long long n,m,year,month,ask,month_total,year_final,month_final;
    cin >> n >> m ;
    vector<long long> publish_date ; 
    string ans;
    while (n--){
        cin >> year >> month ;
        publish_date.push_back((year*12)+month);

    }
    sort(publish_date.begin(),publish_date.end());
    while (m--){
        cin >> year >> month ;
        month_total = (year*12) + month;
        if (upper_bound(publish_date.begin(),publish_date.end(),month_total) == publish_date.begin()){
            ans += "-1 -1 " ;
        } else if (*(lower_bound(publish_date.begin(),publish_date.end(),month_total)) == month_total){
            ans += "0 0 " ;
        } else {
            auto it = prev(lower_bound(publish_date.begin(),publish_date.end(),month_total));
            month_total = *it ;
            year_final = month_total/12 ;
            month_final = month_total%12 ;
            if (month_final == 0){
                year_final -= 1;
                month_final = 12 ;
            }
            ans +=  to_string(year_final)+ " " + to_string(month_final) + " " ;
        }
    }
    cout << ans;
}