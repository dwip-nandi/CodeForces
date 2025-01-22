#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int l;
        cin >> l;
        string s;
        cin >> s;
        int c = 0;
        int n=0;
        for (int i = 0; i < l; i++) {
            if (s[i] == '0' && s[i + 1] == '0') {
                //i++; // Skip the next '0'
            } else {
                if(s[i]=='1')c++;
                n++;
            }
        }
        if (c > (n / 2)) {
            cout << "Yes" << endl;
        } else { 
                cout << "No" << endl;
        }
    }
    return 0;
}
