#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fast_io                  \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

void query()
{
    int n, c, k;
    cin >> n >> c >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++)
    {
        if (v[i] <= c)
        {
            if (k + v[i] >= c)
            {
                k -= (c - v[i]);
                c += c;
            }
            else
            {
                c += (k + v[i]);
                k = 0;
            }
        }
        else
            break;
        // cout << c <<k<< endl;
    }
    cout << c << endl;
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