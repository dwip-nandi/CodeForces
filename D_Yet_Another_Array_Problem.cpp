// #include <bits/stdc++.h>
// using namespace std;
// #define int long long

// signed main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         vector<int> v(n);
//         int x = 7;
//         for (int i = 0; i < n; i++)
//         {
//             cin >> v[i];
//             if (v[i] % 2 == 1)
//             {
//                 x = 2;
//             }
//             else if (x != 2)
//             {
//                 if (v[i] % 5 == 0 && v[i] % 3 != 0)
//                     x = min(x, 3LL);
//                 else if (v[i] % 3 == 0 && v[i] % 5 != 0)
//                     x = min(x, 5LL);
//                 else if (v[i] % 3 == 0 && v[i] % 5 == 0)
//                     x = min(x, 7LL);
//             }
//         }
//         cout << x << endl;
//     }
// }


#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        int x=0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            x= __gcd(x,v[i]);
        }
        for(int i=2;i<100;i++){
            if(__gcd(i,x)==1){
                cout<<i<<endl;
                break;
            }
        }
    }
}