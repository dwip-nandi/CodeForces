#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);

void query() {
    string s;
    cin >> s;
    int n = s.size();
    int c = 0;

    if (s[0] == 'u') {
        c++;
        s[0]='s';
    }
    if (n > 1 && s[n-1] == 'u'){
        c++;
        s[n-1]='s';
    } 

    for (int i = 1; i < n-1; i++) {
        if (s[i] == 'u' && s[i+1] != 's') {
            s[i+1]='s';
            c++;
        }
    }

    cout << c <<endl;
}

int main() {
    fast_io;
    int t;
    cin >> t;
    while (t--) {
        query();
    }
    return 0;
}
