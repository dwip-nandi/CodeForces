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

    vector<int> vb;
    vb.push_back(v[0]);
    for (int i = 1; i < n; i++)
        if (v[i] != v[i - 1])
            vb.push_back(v[i]);

    int sz = vb.size();
    if (sz == 1){
        cout << 1 << endl;
        return;
    }
    int c = 2;
    for (int i = 1; i < sz - 1; i++)
    {
        if ((vb[i] > vb[i - 1] && vb[i] > vb[i + 1]) || (vb[i] < vb[i - 1] && vb[i] < vb[i + 1]))
            c++;
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