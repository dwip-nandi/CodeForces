// #include <bits/stdc++.h>
// using namespace std;
// const double mo = 1e-9;

// void solve()
// {
//     int N;
//     cin >> N;

//     vector<double> A(N);
//     for (int i = 0; i < N; ++i)
//     {
//         cin >> A[i];
//     }

//     if (N <= 2)
//     {
//         cout << 0 << "\n";
//         return;
//     }

//     int mac = 1;

//     if (N > 1)
//     {
//         mac = 2;
//     }

//     for (int i = 0; i < N; ++i)
//     {
//         for (int j = i + 1; j < N; ++j)
//         {

//             double d = (A[j] - A[i]) / (double)(j - i);
//             double a = A[i] - i * d;
//             int cmc = 0;
//             for (int k = 0; k < N; ++k)
//             {
//                 double ta = a + k * d;

//                 if (abs(A[k] - ta) < mo)
//                 {
//                     cmc++;
//                 }
//             }
//             mac = max(mac, cmc);
//         }
//     }

//     int mn = N - mac;
//     cout << mn << "\n";
// }

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t;
//     cin >> t;

//     while (t--)
//     {
//         solve();
//     }

//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;
const double di=1e-9;
// arithmatic progration
void solve(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];

    if(n<=2){
        cout<<0<<endl;
        return ; 
    }
    int mc=1;
    if(n>2){
        mc=2;
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n-1;j++){
            double d= (v[j]-v[i])/(double)(j-i);
            double a= v[i]-i*d;
            int c=0;
            for(int k=0;k<n;k++){
                double t = a+k*d;
                if(abs(v[k]-t)<di)c++;
            }
            mc = max(mc,c);
        }
        
    }
    cout<<n-mc<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}