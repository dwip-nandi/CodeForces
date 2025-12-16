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
//     string s;
//     cin >> s;
//     int pc = 0, mc = 0, lc = 0, ch = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (s[i] == '1')
//             ch = 1;
//         if (s[0] == '0')
//         {
//             while (s[i] == '0')
//             {
//                 pc++;
//                 i++;
//             }
//         }
//         int x = 0;
//         if (s[i] == '0')
//         {
//             while (s[i] == '0')
//             {
//                 x++;
//                 i++;
//             }
//             mc = max(x, mc);
//         }
//     }
//     for (int i = n - 1; i > 0; i--)
//     {
//         if (s[n - 1] == '0')
//         {
//             while (s[i] == '0'){
//                 lc++;
//                 i--;
//             }
//         }else break;
//     }

//     if (ch == 0)
//         cout << n << endl;
//     else
//         cout << max(mc, (pc + lc)) << endl;
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

void query() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    if (count(s.begin(), s.end(), '1') == n) {
        cout << 0 << "\n";
        return;
    }

    int pc = 0;
    while (pc < n && s[pc] == '0') pc++;

    int lc = 0;
    while (lc < n && s[n - 1 - lc] == '0') lc++;

    int mc = 0, cur = 0;
    for (int i = pc; i < (n-lc); i++) {
        if (s[i] == '0') {
            cur++;
            mc = max(mc, cur);
        } else {
            cur = 0;
        }
    }

    cout << max(mc, pc + lc) << "\n";
}

signed main() {
    fast_io;
    int t;
    cin >> t;
    while (t--) {
        query();
    }
    return 0;
}
