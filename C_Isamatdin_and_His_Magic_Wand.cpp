#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        int od = 0, ev = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] % 2 == 0)
                ev++;
            else
                od++;
        }
        if (od > 0 && ev > 0)
        {
            sort(v.begin(), v.end());
            for (auto x : v)
                cout << x << ' ';
            cout << endl;
        }
        else
        {
            for (auto x : v)
                cout << x << ' ';
            cout << endl;
        }
    }
}