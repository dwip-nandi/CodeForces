#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int n;
    cin>>n;
    vector<int>va(n),vb(n);
    int sum=0;
    for(int i=0;i<n;i++){
         cin>>va[i];
         sum +=va[i];
    }
    for(int i=0;i<n;i++)cin>>vb[i];
    sort(vb.rbegin(),vb.rend());
    int con =0;
    for(int c=0;c<2;c++)con += vb[c];

    if(sum<=con)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}