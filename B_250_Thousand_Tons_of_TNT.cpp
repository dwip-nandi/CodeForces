// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define fast_io                  \
//     ios::sync_with_stdio(false); \
//     cin.tie(nullptr);

// void query()
// {
//     int n;
//     cin >> n;
//     vector<int> v(n), prf(n + 1, 0);
//     int mx = 0, mn = INT_MAX;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> v[i];
//         prf[i + 1] = prf[i] + v[i];
//         mx = max(mx, v[i]);
//         mn = min(mn, v[i]);
//     }
//     int d = mx - mn;
//     vector<int> div;
//     for (int i = 2; i <= sqrt(n); i++)
//     {
//         if (n % i == 0)
//         {
//             if (i != (n / i))
//             {
//                 div.push_back(i);
//                 div.push_back(n / i);
//             }
//             else
//             {
//                 div.push_back(i);
//             }
//         }
//     }
//     for (int x : div)
//     {
//         int a = 0, b = INT_MAX;
//         for (int i = 0; i <= n - x; i += x)
//         {
//             int sum = prf[i + x] - prf[i];
//             a = max(a, sum);
//             b = min(b, sum);
//         }
//         d = max(d, a - b);
//     }
//     cout << d << endl;
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
    int n;
    cin >> n;
    vector<int> v(n), prf(n + 1, 0);
    int mx = -1e18, mn = 1e18;
    
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        prf[i + 1] = prf[i] + v[i];
        mx = max(mx, v[i]);
        mn = min(mn, v[i]);
    }
    int d = mx - mn;
    vector<int> div;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            div.push_back(i);
            if (i * i != n) div.push_back(n / i);
        }
    }

    for (int x : div)
    {
        int a = -2e18, b = 2e18;
        for (int i = 0; i <= n - x; i += x)
        {
            int sum = prf[i + x] - prf[i]; 
            a = max(a, sum);
            b = min(b, sum);
        }
        d = max(d, a - b);
    }
    cout << d << endl;
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