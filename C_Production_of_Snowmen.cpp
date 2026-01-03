// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     if (!(cin >> t)) return 0;
//     while (t--) {
//         int n;
//         cin >> n;
//         vector<int> a(n), b(n), c(n);
//         for (int i = 0; i < n; ++i) cin >> a[i];
//         for (int i = 0; i < n; ++i) cin >> b[i];
//         for (int i = 0; i < n; ++i) cin >> c[i];

//         vector<int> goodAB;
//         for (int s = 0; s < n; ++s) {
//             bool ok = true;
//             for (int x = 0; x < n; ++x) {
//                 if (!(a[x] < b[(x + s) % n])) { ok = false; break; }
//             }
//             if (ok) goodAB.push_back(s);
//         }

//         // Compute all good shifts u for B < C (componentwise after rotation by u)
//         vector<int> goodBC;
//         for (int u = 0; u < n; ++u) {
//             bool ok = true;
//             for (int x = 0; x < n; ++x) {
//                 if (!(b[x] < c[(x + u) % n])) { ok = false; break; }
//             }
//             if (ok) goodBC.push_back(u);
//         }

//         long long ans = 1LL * n * (long long)goodAB.size() * (long long)goodBC.size();
//         cout << ans << "\n";
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
    vector<int> a(n), b(n), c(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    for (int i = 0; i < n; ++i)
        cin >> b[i];
    for (int i = 0; i < n; ++i)
        cin >> c[i];

    int s1 = 0;
    for (int i = 0; i < n; ++i)
    {
        bool ok = true;
        for (int j = 0; j < n; j++)
        {
            if (!(a[j] < b[(j + i) % n]))
            {
                ok = false;
                break;
            }
        }
        if (ok)
            s1++;
        ;
    }
    int s2 = 0;
    for (int i = 0; i < n; ++i)
    {
        bool ok = true;
        for (int j = 0; j < n; ++j)
        {
            if (!(b[j] < c[(j + i) % n]))
            {
                ok = false;
                break;
            }
        }
        if (ok)
            s2++;
    }

    int ans = 1LL * n * s1 * s2;
    cout << ans << endl;
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
