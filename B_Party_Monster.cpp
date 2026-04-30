#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fast_io                  \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

void query()
{
    int n;
    cin>>n;
    string s; cin>>s;
    int p=0,q=0;
    for(int i=0;i<n;i++){
       if(s[i]=='(')p++;
       else q++;
    }
    if(p==q)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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