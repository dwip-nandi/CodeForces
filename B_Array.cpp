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
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];

    for(int i=0;i<n-1;i++){
        int mn=0,mx=0;
        for(int j=i+1;j<n;j++){
            if(v[i]<v[j])mx++;
            else if(v[i]>v[j])mn++;
        }
        cout<<max(mx,mn)<<' ';
    }cout<<0<<endl;
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