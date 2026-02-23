#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fast_io                  \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

void query()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int c = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] != s[i + 1])
        {
            c++;
        }
    }
    if (s[0] != s[n - 1] && n != (c + 1))
        cout << c + 2 << endl;
    else
        cout << c + 1 << endl;
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