#include <bits/stdc++.h>
using namespace std;
int main() {
    string borze;
    cin >> borze;

    string decoded;
    for (int i = 0; i < borze.length(); ++i) {
        if (borze[i] == '.') {
            decoded += '0';
        } else if (borze[i] == '-' && borze[i + 1] == '.') {
            decoded += '1';
            ++i; 
        } else if (borze[i] == '-' && borze[i + 1] == '-') {
            decoded += '2';
            ++i; 
        }
    }

    cout << decoded << endl;
    return 0;
}
