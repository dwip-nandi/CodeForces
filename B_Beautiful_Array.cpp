// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define fast_io                  \
//     ios::sync_with_stdio(false); \
//     cin.tie(nullptr);

// void query()
// {
//     int n, k, b, s;
//     cin >> n >> k >> b >> s;
//     int c = b % n;
//     int d = b / n;
//     int q = c * (d + 1);
//     int p = (n - c) * d;
//     int f = (c * k * (d + 1)) + (n - c) * d * k;
//     int g = (s - f) / n;
//     int h = (s - f) % n;
//     //cout<<h<<endl;
//     if (s >= (b * k) && s <= (p * (2 * k - 1) + q * (2 * k - 1)))
//     {

//         for (int i = 0; i < (n - c); i++)
//         {
//             if (h > 0)
//             {
//                 cout << (d * k) + g + 1 << ' ';
//                 h--;
//             }
//             else
//                 cout << (d * k) + g  << ' ';
//         }
//         for (int i = 0; i < c; i++)
//         {
//             if (h > 0)
//             {
//                 cout << ((d + 1) * k) + g+1 << ' ';
//                 h--;
//             }
//             else
//                 cout << ((d + 1) * k) + g << ' ';
//         }
//         cout << endl;
//     }
//     else
//         cout << "-1" << endl;
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
    int n, k, b, s;
    cin >> n >> k >> b >> s;

    if (s < b * k || s > b * k + n * (k - 1)) {
        cout << "-1" << endl;
        return;
    }

    vector<int> a(n, 0);
    
    a[0] = b * k;
    int extra = s - (b * k);

    for (int i = 0; i < n; i++) {
        int can_add = min(extra, k - 1);
        a[i] += can_add;
        extra -= can_add;
    }

    for (int i = 0; i < n; i++) {
        cout << a[i] << (i == n - 1 ? "" : " ");
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