#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fast_io                  \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

void query()
{
    int n, l, h;
    cin >> n >> l >> h;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    sort(v.begin(), v.end());

    int c = 0;
    for (int j = 0; j < n; j++)
    {
        int lv = l - v[j];
        int hv = h - v[j];

        auto it1 = lower_bound(v.begin() + j + 1, v.end(), lv);
        auto it2 = upper_bound(v.begin() + j + 1, v.end(), hv);

        c += (it2 - it1);
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