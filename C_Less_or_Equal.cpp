// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);

// void query() {
//     int n,k;
//     cin >>n>>k ;
//     vector<int>v(n);
//     map<int,int>mp;
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//         mp[v[i]]++;
//     }
//     if (k == 0) {
//         if (v[0] == 1) cout << -1 <<endl;
//         else cout << v[0] - 1 <<endl;
//         return;
//     }
//     bool is=false;
//     int z=0,va=-1;
//     for(auto it:mp){
//         z += it.second;
//         if(z==k){
//             va=it.first;
//             is=true;
//             break;
//         }else if(z>k){
//             is = false;
//             break;
//         }
//     }
//     if(is)cout<<va<<endl;
//     else cout<<-1<<endl;
// }

// signed main() {
//     fast_io;
//     int t=1;
//     //cin >> t;
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
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    sort(v.begin(), v.end());

    if (k == 0) {
        if (v[0] == 1) cout << -1 <<endl;
        else cout << v[0] - 1 <<endl;
        return;
    }

    int x = v[k-1];
    if (k < n && v[k] == x) cout << -1 <<endl;
    else cout << x <<endl;
}

signed main() {
    fast_io;
    query();
    return 0;
}
