#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);

void query() {
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    map<int,int> mp;
    int mn = LLONG_MAX;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        mn = min(mn, v[i]);
        mp[v[i]]++;
    }
    if (k == 0) {
        if (mn == 1) cout << -1 << endl;
        else cout << mn - 1 << endl;
        return;
    }

    int z = 0;
    int ans = -1;
    for (auto it = mp.begin(); it != mp.end(); it++) {
        z += it->second;
        if (z >= k) {
            ans = it->first;
            auto j = it; j++;
            if (z > k && it->second > 1) {
                ans = -1;
            } else if (j != mp.end() && z == k && j->first == ans) {
                ans = -1;
            }
            break;
        }
    }

    cout << ans << endl;
}

signed main() {
    fast_io;
    query();
    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);

// void query() {
//     int n, k;
//     cin >> n >> k;
//     vector<int> v(n);
//     for (int i = 0; i < n; i++) cin >> v[i];
//     sort(v.begin(), v.end());

//     if (k == 0) {
//         if (v[0] == 1) cout << -1 <<endl;
//         else cout << v[0] - 1 <<endl;
//         return;
//     }

//     int x = v[k-1];
//     if (k < n && v[k] == x) cout << -1 <<endl;
//     else cout << x <<endl;
// }

// signed main() {
//     fast_io;
//     query();
//     return 0;
// }
