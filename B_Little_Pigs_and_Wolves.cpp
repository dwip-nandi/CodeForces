#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<string> s(n);
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }
    int c = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (s[i][j] == 'W') {
                if (i + 1 < n && s[i + 1][j] == 'P') {
                    c++;
                    s[i + 1][j] = '.';
                } else if (i - 1 >= 0 && s[i - 1][j] == 'P') {
                    c++;
                    s[i - 1][j] = '.';
                } else if (j + 1 < m && s[i][j + 1] == 'P') {
                    c++;
                    s[i][j + 1] = '.';
                } else if (j - 1 >= 0 && s[i][j - 1] == 'P') {
                    c++;
                    s[i][j - 1] = '.';
                }
            }
        }
    }
    cout << c << endl;
    return 0;
}
