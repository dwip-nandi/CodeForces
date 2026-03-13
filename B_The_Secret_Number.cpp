// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define fast_io                  \
//     ios::sync_with_stdio(false); \
//     cin.tie(nullptr);

// void query()
// {
//     string s;
//     cin>>s;
//     int n=s.size();
//     set<char>se;
//     for(int i=0;i<n;i++){
//         se.insert(s[i]);
//     }
//     if(se.size()==1 && n%2==0){
//         if(n==2){
//             cout<<1<<endl;
//             cout<<s[0]<<endl;
//         }else if(n==4){
//             cout<<2<<endl;
//             for(int i=0;i<2;i++){
//                 cout<<s[0];
//             }cout<<' ';
//            cout<<s[0]<<0<<s[0]<<endl;
//         }
//         else if(n==6){
//             cout<<2<<endl;
//             for(int i=0;i<n/2;i++){
//                 cout<<s[0];
//             }cout<<' ';
//            cout<<s[0]<<0<<s[0]<<0<<s[0]<<endl;
//         }
//         else if(n==8){
//             cout<<3<<endl;
//             for(int i=0;i<n/2;i++){
//                 cout<<s[0];
//             }cout<<' ';
//            cout<<s[0]<<s[0]<<0<<0<<s[0]<<s[0]<<' ';
//            cout<<s[0]<<0<<s[0]<<0<<s[0]<<0<<s[0]<<endl;
//         }else if(n==10){
//             cout<<2<<endl;
//             for(int i=0;i<n/2;i++){
//                 cout<<s[0];
//             }cout<<' ';
//            cout<<s[0]<<0<<s[0]<<0<<s[0]<<0<<s[0]<<0<<s[0]<<endl;
//         }
//         else if(n==12){
//             cout<<4<<endl;
//             for(int i=0;i<n/2;i++){
//                 cout<<s[0];
//             }cout<<' ';
//             cout<<s[0]<<s[0]<<s[0]<<0<<0<<0<<s[0]<<s[0]<<s[0]<<' ';
//             cout<<s[0]<<s[0]<<0<<0<<s[0]<<s[0]<<0<<0<<s[0]<<s[0]<<' ';
//             cout<<s[0]<<0<<s[0]<<0<<s[0]<<0<<s[0]<<0<<s[0]<<0<<s[0]<<endl;
//         }
//         else if(n==14){
//             cout<<2<<endl;
//             for(int i=0;i<n/2;i++){
//                 cout<<s[0];
//             }cout<<' ';
//             cout<<s[0]<<0<<s[0]<<0<<s[0]<<0<<s[0]<<0<<s[0]<<0<<s[0]<<0<<s[0]<<endl;
//         }
//         else if(n==16){
//             cout<<4<<endl;
//             for(int i=0;i<n/2;i++){
//                 cout<<s[0];
//             }cout<<' ';
//             cout<<s[0]<<s[0]<<s[0]<<s[0]<<0<<0<<0<<0<<s[0]<<s[0]<<s[0]<<s[0]<<' ';
//             cout<<s[0]<<s[0]<<0<<0<<s[0]<<s[0]<<0<<0<<s[0]<<s[0]<<0<<0<<s[0]<<s[0]<<' ';
//             cout<<s[0]<<0<<s[0]<<0<<s[0]<<0<<s[0]<<0<<s[0]<<0<<s[0]<<0<<s[0]<<0<<s[0]<<endl;
//         }
//         else if(n==18){
//             cout<<3<<endl;
//             for(int i=0;i<n/2;i++){
//                 cout<<s[0];
//             }cout<<' ';
//             cout<<s[0]<<s[0]<<s[0]<<0<<0<<0<<s[0]<<s[0]<<s[0]<<0<<0<<0<<s[0]<<s[0]<<s[0]<<' ';
//             cout<<s[0]<<0<<s[0]<<0<<s[0]<<0<<s[0]<<0<<s[0]<<0<<s[0]<<0<<s[0]<<0<<s[0]<<0<<s[0]<<endl;
//         }
//     }
//     else cout<<0<<endl;
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
    string s;
    cin >> s;
    int n = stoll(s);
    
    set<int> se;
    int p10 = 10;

    for (int p = 1; p <= 18; p++) {
        int d = 1 + p10;
        
        if (n % d == 0) {
            se.insert(n / d);
        }

        if (p10 > 2e17) break;
        p10 *= 10;
    }

    if (se.empty()) {
        cout << 0 << endl;
    } else {
        cout << se.size() <<endl;
        for (int x : se) {
            cout << x << " ";
        }
        cout << endl;
    }
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