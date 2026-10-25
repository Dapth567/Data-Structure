#include <iostream>
#include <iomanip>
#include <map>

using namespace std;

int main(){
    int n,score,total,all ;
    string subject,student;
    cout << std::fixed << std::setprecision(2);
    cin >> n;
    map<string,pair<int,int>> sub2sco ;
    map<string,pair<int,int>> stu2sco;
    while (n--){
        cin >> subject >> student >> score;
        if (sub2sco.find(subject) == sub2sco.end()){
            sub2sco[subject].first = score;
            sub2sco[subject].second = 1;
        } else if (sub2sco.find(subject) != sub2sco.end()){
            sub2sco[subject].first += score;
            sub2sco[subject].second += 1;
        }
        if (stu2sco.find(student) == stu2sco.end()){
            stu2sco[student].first = score;
            stu2sco[student].second = 1;
        } else if (stu2sco.find(student) != stu2sco.end()){
            stu2sco[student].first += score;
            stu2sco[student].second += 1;
        }
    }   

    for (auto it = sub2sco.begin() ; it != sub2sco.end() ; it ++){
        cout << it->first << " " << ((it->second).first + 0.0) / ((it->second).second) << endl;
    }
    for (auto it = stu2sco.begin() ; it != stu2sco.end() ; it ++){
        cout << it->first << " " << ((it->second).first + 0.0) / ((it->second).second) << endl;
    }
    
}
