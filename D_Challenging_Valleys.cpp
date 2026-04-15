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
    vector<int> v(n), va;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (i == 0)
            va.push_back(v[i]);
        else
        {
            if (v[i] != v[i - 1])
                va.push_back(v[i]);
        }
    }
    int a = 0, b = va.size(), c = 0;
    if (b == 1)
    {
        cout << "YES" << endl;
        return;
    }

    if (va[0] < va[1])
        c++;
    if (va[b - 1] < va[b - 2])
        c++;

    for (int i = 1; i < b - 1; i++)
    {
        if (va[i - 1] > va[i] && va[i] < va[i + 1])
            c++;
    }

    if (c == 1)
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