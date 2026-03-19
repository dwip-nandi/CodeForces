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
    vector<int> vx(n);
    vector<int> vy(n);
    vector<int> vd;
    for (int i = 0; i < n; i++)
        cin >> vx[i];
    for (int i = 0; i < n; i++)
        cin >> vy[i];
    for (int i = 0; i < n; i++)
        vd.push_back(vy[i] - vx[i]);
    sort(vd.begin(), vd.end());
    int c = 0;
    int a = 0, b = n - 1;
    while (a < b)
    {
        if ((vd[a] + vd[b]) >= 0)
        {
            c++;
            a++;
            b--;
        }
        else
            a++;
    }
    cout<<c<<endl;
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