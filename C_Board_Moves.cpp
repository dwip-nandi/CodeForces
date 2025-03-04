// #include<bits/stdc++.h>
// using namespace std;
// #define int long long
// signed main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         int m=n-1;
//         int c=0,k=0;
//         while(m!=0){
//             if(m&1!=0)c++;
//             m = m>>1;
//             k++;
//         }
//         //cout<<k<<endl;
//         //cout<<c<<endl;
//         int sum=0;
//         for(int i=1;i<k;i++){
//             sum =sum + 8LL *pow(2,(i-1))*i;
//         }
//         cout<<sum<<endl;
//     }
// }
//update code
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        long long sum = 0;
        for (int i = 1; i <= n / 2; i++) {
            sum += 8LL * i * i;
        }
        
        cout << sum << endl;
    }
    return 0;
}
