#include <bits/stdc++.h>
using namespace std;

int main() {
    string command;
    set<string> chat_members;
    long long total_traffic = 0;

    while (getline(cin, command)) {
        if (command[0] == '+') {
            string name = command.substr(1);
            chat_members.insert(name);
        } else if (command[0] == '-') {
            string name = command.substr(1);
            chat_members.erase(name);
        } else {
            size_t colon_pos = command.find(':');
            string sender = command.substr(0, colon_pos);
            string message = command.substr(colon_pos + 1);
            int message_length = message.length();
            total_traffic += message_length * chat_members.size();
        }
    }

    cout << total_traffic << endl;
    return 0;
}
