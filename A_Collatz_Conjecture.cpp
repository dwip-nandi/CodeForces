// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n, k;
//         cin >> n >> k;
//         int ans = k;
//         for (int i = n; i >= 1; i--)
//         {
//             if ((ans - 1) % 3 == 0 && ans>3)
//             {
//                 ans = (ans - 1) / 3;
//             }
//             else
//                 ans *= 2;
//         }
//         cout<<ans<<endl;
//     }
// }

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int k,x;
        cin>>k>>x;
        cout<<(x<<k)<<endl;
    }
}