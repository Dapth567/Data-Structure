#include <iostream>
#include <set>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    string flight,seat;
    pair<string,string> ticket;
    set<pair<string,string>> all_ticket, wanted_ticket;
    int ticket_amount , customer , ticket_order;
    bool successful ;
    cin >> ticket_amount >> customer ;
    while (ticket_amount--){
        cin >> flight >> seat ;
        all_ticket.insert({flight,seat});
    }
    while (customer--){
        cin >> ticket_order ; 
        wanted_ticket.clear();
        successful = true;
        while (ticket_order--){
            cin >> flight >> seat ; 
            ticket = {flight,seat};
            if (all_ticket.find(ticket) != all_ticket.end()){
                wanted_ticket.insert(ticket);
            } else {
                successful = false;
            }
        }
        if (successful){
            cout << "YES" << endl;
            for(auto tic : wanted_ticket){
                all_ticket.erase(tic);
            }
        } else {
            cout << "NO" << endl;
        }
    }
}
