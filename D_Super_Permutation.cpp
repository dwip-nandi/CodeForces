#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fast_io                  \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

void query()
{
    int n; cin>>n;
    if(n==1){
        cout<<1<<endl;
        return;
    }else if(n%2==1){
        cout<<-1<<endl;
        return;
    }else{
        int a=n,b=1;
        for(int i=0;i<n/2;i++){
            cout<<a<<' '<<b<<' ';
            a-=2; b+=2;
        }cout<<endl;
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