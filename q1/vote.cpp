#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

void delete_max(map<string,int> &m){
    int max_Value = 0 ;
    map<string,int>::iterator max_it,it;
    for (auto it = m.begin() ; it != m.end() ; it++){
        max_Value = max(max_Value,it->second);
        if (m[it->first] == max_Value){
            max_it = it;
        }
    }
    m.erase(max_it);
}

int main(){
    int n,k;
    string Candidate;
    map<string,int> scoreBoard;
    cin >> n >> k;
    k = min((k-1),2);
    while(n--){
        cin >> Candidate;
        if (scoreBoard.find(Candidate) == scoreBoard.end()){
            scoreBoard[Candidate] = 1;
        } else if (scoreBoard.find(Candidate) != scoreBoard.end()){
            scoreBoard[Candidate] += 1;
        }
    }
    while(k--){
        delete_max(scoreBoard);
    }
    int max_Value = 0;
    for (auto &p : scoreBoard) {
        max_Value = max(max_Value, p.second);
}
    cout << max_Value;

}