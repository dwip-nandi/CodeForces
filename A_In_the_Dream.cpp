#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fast_io                  \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

void query()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int e = c - a, f = d - b;
    bool is = true;
    if ((min(a, b) + 1) * 2 < max(a, b))
        is = false;
    else if ((min(e, f) + 1) * 2 < max(e, f))
        is = false;

    if (is)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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
