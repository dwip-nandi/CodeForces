#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a,b,c,d,e,f,g;
    cin>>a>>b>>c>>d>>e>>f>>g;
    vector<int>v={a,b,c,d,e,f,g};
    int sum=0,r=0;
    while(sum<n){
        sum +=v[r];
        r =(r+1)%7;
    }
    cout<<(r==0?7:r)<<endl;
}