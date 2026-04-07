// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define fast_io                  \
//     ios::sync_with_stdio(false); \
//     cin.tie(nullptr);

// void query()
// {
//     int n, x, d = -1;
//     cin >> n >> x;
//     vector<int> pre(n);
//     for (int i = 0; i < n; i++)
//     {
//         int k;
//         cin >> k;
//         if (i == 0)
//             pre[i] = k;
//         else
//             pre[i] = pre[i - 1] + k;

//         if (pre[i] % x != 0)
//             d = max(d, i + 1);
//     }
//     int a = 0, b = n - 1;

//     while (a < b)
//     {
//         if ((pre[b] - pre[a]) % x != 0)
//             d = max(d, (b - a + 1));
//     }
// }

// signed main()
// {
//     fast_io;
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         query();
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fast_io                  \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

void query()
{
    int n, x;
    cin >> n >> x;
    vector<int> v(n);
    int total = 0, f = -1, l = -1;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        total += v[i];
        if (v[i] % x != 0)
        {
            if (f == -1)
                f = i;
            l = i;
        }
    }
    if (total % x != 0)
    {
        cout << n << endl;
        return;
    }
    if (f == -1)
    {
        cout << -1 << endl;
        return;
    }
    int lc = f + 1;
    int rc = n - l;

    cout << n - min(lc, rc) << endl;
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