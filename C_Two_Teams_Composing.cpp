// #include <bits/stdc++.h>
// using namespace std;

// void codeN() {
//     int n;
//     cin >> n;
//     vector<int> v(n);
//     set<int> s;
//     map<int, int> Ecount;

//     for (int i = 0; i < n; ++i) {
//         cin >> v[i];
//         Ecount[v[i]]++;
//         s.insert(v[i]);
//     }

//     int maxcount = 0;
//     int maxElement = 0;

//     for (const auto& pair : Ecount) {
//         if (pair.second > maxcount) {
//             maxcount = pair.second;
//             maxElement = pair.first;
//         }
//     }

//     int left_array = s.size()-1 ;
//     int right_array = maxcount;
    
//     if (right_array > (n / 2) && right_array > left_array) {
//             cout << left_array+1 << endl;
//     }
//     else 
//         cout << min(left_array, right_array) << endl;
    

//     // if (left_array < (n / 2)) {
//     //     if (right_array > (n / 2) && right_array > left_array) {
//     //         cout << left_array  << endl;
//     //     } else {
//     //         cout << right_array << endl;
//     //     }
//     // } else {
//     //     cout << min(left_array, right_array) << endl;
//     // }
// }

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         codeN();
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
    vector<int> v(n);
    map<int,int> mp;
    for(int i=0;i<n;i++){
        cin >> v[i];
        mp[v[i]]++;
    }

    int mx = 0;
    for(auto it:mp) mx = max(mx, it.second);

    int d = mp.size();
    int ans;
    if(mx == d) ans = mx - 1;
    else ans = min(mx, d);

    cout << ans << "\n";
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
