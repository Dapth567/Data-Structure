#include <iostream>
#include <vector>
using namespace std; 

int main() {
    vector<int> time(2); 
    cin >> time[0] >> time[1];

    int minute_shift,hour_shift = 0;
    cin >> minute_shift;
    if (minute_shift+time[1] >= 60){
        hour_shift = (minute_shift+time[1])/60;
        minute_shift = minute_shift%60;
    }

    time[0] = time[0] + hour_shift;
    if (time[0] > 23){
        time[0] -= 24;
    }
    time[1] = time[1] + minute_shift;
    if (time[1] >= 60){
        time[1] -=60;
    }
    
    vector<string> time_show(2);
    for(int i = 0 ; i<2;i++){
        time_show[i] = to_string(time[i]);
        if (time_show[i].size() == 1){
            time_show[i] = "0"+time_show[i];
        }
    }

    cout << time_show[0] << " " << time_show[1];
}


// #include <iostream>
// #include <iomanip> // สำหรับ setw และ setfill
// using namespace std;

// int main() {
//     int H, M, X;
//     cin >> H >> M >> X;

//     int total = H * 60 + M + X;   // รวมทั้งหมดเป็นนาที
//     total %= 1440;                // วนกลับถ้าเกิน 24 ชม.

//     H = total / 60;
//     M = total % 60;

//     cout << setw(2) << setfill('0') << H << " "
//          << setw(2) << setfill('0') << M << endl;
// }             GPT