// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);

// void query() {
//     int n, p;
//     cin >> n >> p;

//     multimap<int, int> mp;
//     vector<int> va(n), vb(n);

//     for (int i = 0; i < n; ++i) cin >> va[i];
//     for (int i = 0; i < n; ++i) cin >> vb[i];

//     for (int i = 0; i < n; ++i) {
//         mp.emplace(vb[i], va[i]);
//     }

//     int c = p, r = n - 1;

//     for (const auto& [b, a] : mp) {
//         if (a <= p && r>=b) {
//             c += (b*a);
//             r -=b;
//             if (r <= 0) break;
//         } else {
//             break;
//         }
//     }

//     if (r > 0) {
//         c += r * p;
//     }

//     cout << c <<endl;
// }

// signed main() {
//     fast_io;
//     int t;
//     cin >> t;
//     while (t--) {
//         query();
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);

void query() {
    int n, p;
    cin >> n >> p;

    vector<int> va(n), vb(n);
    for (int i = 0; i < n; i++) cin >> va[i];
    for (int i = 0; i < n; i++) cin >> vb[i];

    vector<pair<int, int>> pairs;
    for (int i = 0; i < n; i++) {
        pairs.push_back({vb[i], va[i]});
    }
    sort(pairs.begin(), pairs.end());

    int c = p; 
    int r = n - 1;

    for (auto& edge : pairs) {
        int cost = edge.first;
        int limit = edge.second;

        if (cost >= p || r <= 0) break;

        int d = min(r, limit);
        
        c += (d * cost);
        r -= d;
    }
    if (r > 0) {
        c += (r * p);
    }

    cout << c << endl;
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