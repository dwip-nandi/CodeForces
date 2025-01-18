#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, c = 0;
    cin >> n;
    vector<int> va(n),vb(n);
    for (int i = 0; i < n; i++)
        cin >> va[i];
    for (int j = 0; j < n; j++)
        cin >> vb[j];
     
    if(va==vb)c++;

    if(c==0){
        reverse(vb.begin(),vb.end());
    }
    if(va==vb)c++;

    if(c>0)cout<<"Bob"<<endl;
    else cout<<"Alice"<<endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
/*#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,cnt=0;
        cin>>n;
        vector<int>a,b;
        for(ll i=0;i<n;i++)
        {
            int x;
            cin>>x;
            a.push_back(x);
        }
        for(ll i=0;i<n;i++)
        {
            int x;
            cin>>x;
            b.push_back(x);
        }
        if(a==b)
        cnt++;
        if(cnt==0)
        reverse(b.begin(),b.end());

        if(a==b)
        cnt++;

        if(cnt!=0)
        cout<<"Bob"<<endl;
        else
        cout<<"Alice"<<endl;
    }

    return 0;
}
*/