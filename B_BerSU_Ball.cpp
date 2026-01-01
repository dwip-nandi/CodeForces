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
    vector<int> vn(n);
    for (int i = 0; i < n; i++)
        cin >> vn[i];
    sort(vn.begin(), vn.end());
    int m;
    cin >> m;
    vector<int> vm(m);
    for (int i = 0; i < m; i++)
        cin >> vm[i];
    sort(vm.begin(), vm.end());

    int c = 0, i = 0, j = 0;
    while (i < n && j < m)
    {
        if (abs(vn[i] - vm[j]) <= 1)
        {
            c++;
            i++;
            j++;
        }
        else if (vn[i] < vm[j])
        {
            i++;
        }
        else if (vn[i] > vm[j])
            j++;
    }

    cout << c << endl;
}

signed main()
{
    fast_io;
    int t=1;
    //cin >> t;
    while (t--)
    {
        query();
    }
    return 0;
}
