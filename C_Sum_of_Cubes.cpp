// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);

// void query() {
//     int n;
//     cin >> n;

//     bool is =false;
//     int i=1,j=1e5;
//     while(i<j){
//         for(int k=1;k<1e5;k++){
//             if((i*i*i)+(k*k*k)==n || (j*j*j)+(k*k*k)==n ){
//                 is = true;
//                 break;
//             }
//             if((i*i*i)+(k*k*k)<n)i++;
//             if((j*j*j)+(k*k*k)>n)j--;
//         }
//     }
//     if(is)cout << "YES" << endl;
//     else cout<<"NO"<<endl;
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

bool isCube(int x) {
    int c = cbrt(x);  // floating cube root
    for (int d = max(0LL, c-2); d <= c+2; d++) {
        if (d*d*d == x) return true;
    }
    return false;
}

void query() {
    int n;
    cin >> n;
    bool ok = false;
    for (int a = 1; a*a*a < n; a++) {
        int b3 = n - a*a*a;
        if (isCube(b3)) {
            ok = true;
            break;
        }
    }
    cout << (ok ? "YES\n" : "NO\n");
}

signed main() {
    fast_io;
    int t;
    cin >> t;
    while (t--) query();
    return 0;
}
