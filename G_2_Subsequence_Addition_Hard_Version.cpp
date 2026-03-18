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
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    int sum = 1;
    if (v[0] == 1)
    {
        for (int i = 1; i < n; i++)
        {
            if (v[i] <= sum)
            {
                sum += v[i];
            }
            else
            {
                cout << "NO" << endl;
                return;
            }
        }
        cout << "YES" << endl;
    }
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