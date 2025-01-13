#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> va(n);
        vector<int> vb(n);
        for (int i = 0; i < n; i++)
        {
            cin >> va[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> vb[i];
        }
        bool isPosible=false;
        int mx=0,index=0,c=0;
        for (int i = 0; i < n; i++)
        {
            if(vb[i]-va[i]>0){
                c++;
                mx = vb[i]-va[i];
                index =i;
            }
        }
        //cout<<c<<endl;
        if(c<2){
            for(int i=0;i<n;i++){
                if(i==index) va[i]=va[i]+mx;
                else{
                    va[i]=va[i]-mx;
                }
            }
            //for(auto u:va)cout<<u<<' ';
            //cout<<endl;
            int x=0;
            for(int i=0;i<n;i++){
                if(va[i]>=vb[i])x++;
            }
            if(x==n)isPosible=true;
            //cout<<x<<endl;
        }
        if(isPosible)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
}