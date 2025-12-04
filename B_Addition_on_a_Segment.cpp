// #include<bits/stdc++.h>
// using namespace std;
// #define int long long
// signed main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         vector<int>v(n);
//         int c=0,d=0;
//         for(int i=0;i<n;i++){
//             cin>>v[i];
//             if(v[i]>0)c+=v[i],d++;
//         }
//         if(c<=n)cout<<1<<endl;
//         else{
//             if(c==(2*n-2))cout<<2<<endl;
//             else
//                cout<<d<<endl;

//         }
//     }
// }
// // if(c>=(2*n)-1)

#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        int d = 0, c = 0;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            d += v[i];
            if (v[i] > 0) c++;
        }
        int ans = min(c, d - n + 1);
        cout << ans <<endl;
    }
}
