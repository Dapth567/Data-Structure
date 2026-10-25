#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,m,l,shift,count;
    string letter_order = "abcdefghijklmnopqrstuvwxyz" , word ;
    vector<string> finish_password , raw_password;
    cin >> n >> m >> l;
    vector<int> char_shift;
    while (l--)
    {
        cin >> shift;
        char_shift.push_back(shift);
    }
    while (n--)
    {
        count = 0 ;
        cin >> finish_password ;
        for (string e : finish_password){
            letter_order.find(e);
        }
    }
    
    
}