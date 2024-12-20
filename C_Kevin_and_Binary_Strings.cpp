#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int n = s.size(), index = n;
        bool isZero = false;
        for (int i = 0; i < n; i++) {
            if (s[i] == '0') {
                index = i;
                isZero = true;
                break;
            }
        }
        if (!isZero) {
            cout << '1' << ' ' << n << ' ' << '1' << ' ' << '1' << endl;
            continue;
        }
        int newLength = n - index, l2 = 0;
        string max = "0";
        for (int j = 0; j < index; j++) {
            int p = index, q = j;
            string subString;
            for (int k = 0; k < newLength; k++) {
                if (s[p] != s[q]) subString += '1';
                else subString += '0';
                p++;
                q++;
            }
            if (max < subString) {
                max = subString;
                l2 = j;
            }
        }
        cout << 1 << ' ' << n << ' ' << l2 + 1 << ' ' <<l2+newLength << endl;
    }
    return 0;
}
