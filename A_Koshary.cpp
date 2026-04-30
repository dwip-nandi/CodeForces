#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fast_io                  \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

void query()
{
    int x,y;
    cin>>x>>y;
    if(x%2==1 && y%2==1)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;

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