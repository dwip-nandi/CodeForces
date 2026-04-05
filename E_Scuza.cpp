// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define fast_io                  \
//     ios::sync_with_stdio(false); \
//     cin.tie(nullptr);

// void query()
// {
//     int n, q;
//     cin >> n >> q;
//     vector<int> va(n), vb(q), pre(n, 0);
//     for (int i = 0; i < n; i++)
//         cin >> va[i];
//     sort(va.begin(), va.end());

//     pre[0] = va[0];
//     for (int i = 1; i < n; i++)
//     {
//         pre[i] = pre[i - 1] + va[i];
//     }
//     for (int i = 0; i < q; i++)
//         cin >> vb[i];

//     int c = 0;

//     for (int i = 0; i < q; i++)
//     {

//         if (c < pre[n - 1])
//         {
//             auto it = upper_bound(va.begin(), va.end(), vb[i]);
//             if (it != va.begin())
//             {
//                 it--;
//                 int ind = distance(va.begin(), it);
//                 cout << pre[ind] << ' ';
//             }
//             else
//                 cout << 0 << ' ';
//         }
//         else
//             cout << pre[n - 1] << ' ';
//     }
//     cout << endl;
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
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);

void query()
{
    int n, q;
    cin >> n >> q;
    vector<int> a(n), pre(n), pref_max(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];

        if (i == 0) pre[i] = a[i];
        else pre[i] = pre[i - 1] + a[i];

        if (i == 0) pref_max[i] = a[i];
        else pref_max[i] = max(pref_max[i - 1], a[i]);
    }

    for (int i = 0; i < q; i++) {
        int k;
        cin >> k;

        auto it = upper_bound(pref_max.begin(), pref_max.end(), k);
        
        if (it == pref_max.begin()) {
            cout << 0 << " ";
        } else {
            it--;
            int ind = distance(pref_max.begin(), it);
            cout << pre[ind] << " ";
        }
    }
    cout << endl;
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