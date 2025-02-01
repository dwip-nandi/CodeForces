#include <bits/stdc++.h>
using namespace std;

bool isPosible(string str) {
    while (!str.empty()) {
        if (str.substr(0, 3) == "144") {
            str = str.substr(3);
        } else if (str.substr(0, 2) == "14") {
            str = str.substr(2);
        } else if (str.substr(0, 1) == "1") {
            str = str.substr(1);
        } else {
            return false;
        }
    }
    return true;
}

int main() {
    string str;
    cin >> str;

    if (isPosible(str)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
