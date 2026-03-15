// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define fast_io                  \
//     ios::sync_with_stdio(false); \
//     cin.tie(nullptr);

// void query()
// {
//     int n; cin>>n;
//     vector<string>vs(n);
//     set<string>s;
//     for(int i=0;i<n;i++){
//         cin>>vs[i];
//     }
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             s.insert(vs[i]+vs[j]);
//         }
//     }
//     vector<int>v(n,0);
//     for(int i=0;i<n;i++){
//         for(int j=0;j<s.size();j++){
//             if(vs[i]==*next(s.begin(),j))v[i]=1;
//         }
//     }
//     for(auto x:v)cout<<x;
//     cout<<endl;
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
    int n; cin>>n;
    vector<string>vs(n);
    unordered_set<string>st;
    for(int i=0;i<n;i++){
        cin>>vs[i];
        st.insert(vs[i]);
    }
    string r="";
    for(int i=0;i<n;i++){
        string s=vs[i];
        bool is=false;
        for(int j=0;j<s.size();j++){
            string s1=s.substr(0,j);
            string s2=s.substr(j);

            if(st.count(s1) && st.count(s2)){
                is=true;
                break;
            }
        }
        if(is)r+='1';
        else r+='0';
    }
    cout<<r<<endl;
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