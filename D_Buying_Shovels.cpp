// #include<bits/stdc++.h>
// using namespace std;
// #define int long long
// bool is_prime(int n){
//     if(n<2)return false;
//     if(n<=3)return true;
//     if(n%2==0)return false;
//     for(int i=3;i<=sqrt(n);i +=2){
//         if(n % i ==0)return false;
//     }
//     return true;
// }
// signed main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n,k;
//         cin>>n>>k;
//         if(n<=k){
//             cout<<1<<endl;
//             continue;
//         }
//         else if(k==1 || is_prime(n)){
//             cout<<n<<endl;
//         }else{
//             cout<<(n+k-1)/k<<endl;
//         }
//     }
// }

#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int ans = n;
        for (int i = 1; i * i <= n; i++) {
            if (n % i == 0) {
                int d1 = i, d2 = n / i;
                if (d1 <= k) ans = min(ans, n / d1);
                if (d2 <= k) ans = min(ans, n / d2);
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
