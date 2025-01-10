#include <bits/stdc++.h>
using namespace std;

bool isRBS(string s) {
    int n = s.length();
    if (n % 2 != 0) return false; 
    int balance = 0;
    for (char c : s) {
        if (c == '(' || c == '?') balance++;
        else balance--;
        if (balance < 0) return false;
    }
    balance = 0;
    for (int i = n - 1; i >= 0; i--) {
        if (s[i] == ')' || s[i] == '?') balance++;
        else balance--;
        if (balance < 0) return false;
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        if (isRBS(s)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
