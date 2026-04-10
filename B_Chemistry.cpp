#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fast_io                  \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

void query()
{
    int n,k;
    cin>>n>>k;
    
    string s;
    cin>>s;
    map<char,int>mp;
    for(char a:s){
        mp[a]++;
    }
    int os=0,mxodd=0;
    for(auto const &[w,c]:mp){
        if(c%2==1){
           os+=1;
        }
    }
    int x=os-1;
    if(k>=x)cout<<"YES"<<endl;
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