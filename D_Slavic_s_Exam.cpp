#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fast_io                  \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

void query()
{
    string s, r;
    cin >> s >> r;
    int n = s.size(), m = r.size();
    
    int j = 0; 
    for (int i = 0; i < n; i++) {
        if (j < m) {
            if (s[i] == '?' || s[i] == r[j]) {
                s[i] = r[j];
                j++;
            }
        } else {
            if (s[i] == '?') s[i] = 'a';
        }
    }
    if (j == m) {
        cout << "YES" << endl;
        cout << s << endl;
    } else {
        cout << "NO" << endl;
    }
}

signed main()
{
    fast_io;
    int t;
    cin >> t;
    while (t--)
    {
        query();
    }
    return 0;
}