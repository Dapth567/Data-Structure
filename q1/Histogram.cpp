#include <iostream>
#include <map>
using namespace std;

int main(){
    int n;
    cin >> n;
    string word;
    map<string,int> word_Count;
    while(n--){
        cin >> word;

        if (word_Count.find(word) == word_Count.end()){
            word_Count[word] = 1;
        } else if (word_Count.find(word) != word_Count.end()){
            word_Count[word] += 1;
        }
    }
    for (auto it = word_Count.begin(); it != word_Count.end();it ++){
        if (it->second == 1){
            continue;
        } else {
            cout << it->first << " " << it->second << endl;
        }
    }
       
}
