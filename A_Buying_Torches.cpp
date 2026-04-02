#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fast_io                  \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

void query()
{
    int x, y, k;
    cin >> x >> y >> k;
    int ts = k * y + k;
    
    int tsn = ts - 1;
    
    int st = (tsn + (x - 2)) / (x - 1);
    
    int ans = st + k;
    
    cout << ans << endl;
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