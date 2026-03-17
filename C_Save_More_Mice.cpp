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
    vector<int>v(k);
    for(int i=0;i<k;i++)cin>>v[i];
    sort(v.rbegin(),v.rend());

    int c=0,cp=0;
    for(int i=0;i<k;i++){
        if(v[i]>cp){
            c++;
            cp +=(n-v[i]);
        }else break;
    }
    cout<<c<<endl;
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