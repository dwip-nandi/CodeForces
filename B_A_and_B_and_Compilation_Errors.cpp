#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int n;
    cin>>n;
    vector<int>va(n);
    vector<int>vb(n-1);
    vector<int>vc(n-2);
    int ta=0,tb=0,tc=0;
    for(int i=0;i<n;i++){
        cin>>va[i];
        ta += va[i];
    }
    for(int i=0;i<n-1;i++){
        cin>>vb[i];
        tb += vb[i];
    }
    cout<<ta-tb<<endl;
    for(int i=0;i<n-2;i++){
        cin>>vc[i];
        tc += vc[i];
    }
    cout<<tb-tc<<endl;
}