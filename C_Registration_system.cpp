// #include <iostream>
// #include <unordered_map>
// #include <string>
// using namespace std;
// int main() {
//     int n;
//     cin >> n;
//     unordered_map<string, int> database;

//     for (int i = 0; i < n; i++) {
//         string name;
//         cin >> name;

//         if (database.find(name) == database.end()) {
//             database[name] = 0;
//             cout << "OK" << endl;
//         } else {
//             database[name]++;
//             cout << name << database[name] << endl;
//         }
//     }

//     return 0;
// }

// optimize code
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    unordered_map<string, int> database;
    for (int i = 0; i < n; i++)
    {
        string name;
        cin >> name;
        if (database.find(name) == database.end())
        {
            database[name] = 0;
            cout << "OK" << endl;
        }
        else
        {
            database[name]++;
            cout << name << database[name] << endl;
        }
    }
    return 0;
}