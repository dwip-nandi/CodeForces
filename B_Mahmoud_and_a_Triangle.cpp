#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(v.rbegin(), v.rend());
    bool isPosible = false;
    for (int i = 0; i < n - 2; i++)
    {
        if (v[i] < (v[i + 1] + v[i + 2]))
        {
            isPosible = true;
            break;
        }
    }
    if (isPosible)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}