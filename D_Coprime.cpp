// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define fast_io                  \
//     ios::sync_with_stdio(false); \
//     cin.tie(nullptr);

// void query()
// {
//     int n; cin>>n;
//     vector<int>v(n);
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//     }
//     int c=-1;
//     for(int i=0;i<n;i++){
//        for(int j=0;j<n;j++){
//              if(__gcd(v[i],v[j])==1){
//                 int x=i+j+2;
//                 c = max(c,x);
//              }
//        }
//     }
//     if(c==-1)cout<<-1<<endl;
//     else cout<<c<<endl;
// }

// signed main()
// {
//     fast_io;
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         query();
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fast_io                  \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

void query()
{
    int n; cin >> n;
    vector<int> v(1001, -1); 

    for (int i = 1; i <= n; i++) {
        int x; cin >> x;
        v[x] = i;
    }

    int c = -1;
    for (int i = 1; i <= 1000; i++) {
        for (int j = 1; j <= 1000; j++) {
            if (v[i] != -1 && v[j] != -1 && __gcd(i, j) == 1) {
                c = max(c, v[i] + v[j]);
            }
        }
    }

    cout << c << endl;
}

signed main()
{
    fast_io;
    int t;
    cin >> t;
    while (t--)
    {
        query();
    }
    return 0;
}