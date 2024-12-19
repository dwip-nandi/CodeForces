#include <bits/stdc++.h>
using namespace std;

bool codeN(int n) {
    if (n < 33) return false;
    if (n % 33 == 0) return true;
    string str = to_string(n);
    size_t position = str.find("33");
    if (position != string::npos) {
        str.erase(position, 2);
        n = str.empty() ? 0 : stoi(str);
        return codeN(n);
    }

    return false;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (codeN(n)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
