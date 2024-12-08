#include <bits/stdc++.h>
using namespace std;
void codeN() {
    string s;
    cin >> s;
    int n = s.length();
    bool capsLock = true;
    for (int i = 1; i < n; i++) {
        if (islower(s[i])) {
            capsLock = false;
            break;
        }
    }
    if (capsLock) {
        for (int i = 0; i < n; i++) {
            if (islower(s[i])) {
                s[i] = toupper(s[i]);
            } else {
                s[i] = tolower(s[i]);
            }
        }
    }
    cout << s << endl;
}
int main() {
    codeN();
    return 0;
}
/*
#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    if (islower(s[0])) {
        s[0] = toupper(s[0]);
    }
    for (int i = 1; i < s.size(); i++) {
        if (isupper(s[i])) {
            s[i] = tolower(s[i]);
        }
    }
    cout << s << endl;
    return 0;
}*/