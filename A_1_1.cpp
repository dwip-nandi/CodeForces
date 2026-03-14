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
    string r = s;
    int mi = 0, mx = 0, c = 0;
    for (int i = 0; i < n; i++)
        if (s[i] == '1')
            c++;
    for (int i = 0; i < n - 2; i++)
    {
        if (s[i] == '1' && s[i + 2] == '1')
        {
            if (s[i + 1] == '0')
            {
                mx++;
                r[i + 1] = '1';
            }
        }
    }
    int rc = 0, tc = 0;
    for (int i = 0; i < n; i++)
    {
        if (r[i] == '1')
            tc++;
    }
    for (int i = 0; i < n - 2; i++)
    {
        if (r[i] == '1' && r[i + 1] == '1' && r[i + 2] == '1')
        {
            rc++;
            r[i + 1] = '0';
        }
    }

    // cout<<tc<<' '<<rc<<endl;
    cout <<tc - rc<< ' ' << c + mx << endl;
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

