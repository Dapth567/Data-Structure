#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int main(){
    map<string,int> word;
    int n,max_Value = 0;
    string x,max_Word;
    cin >> n;
    while(n--){
        cin >> x ;
        if (word.find(x) == word.end()){
            word[x] = 1 ;
            max_Value = max(max_Value,word[x]);
        } else {
            word[x] += 1 ;
            max_Value = max(max_Value,word[x]);
        }
    }
    for (auto it = word.begin(); it != word.end() ; it++){
        if (it->second == max_Value){
            max_Word = it->first;
        }
    }
    cout << max_Word << " " << max_Value;
}