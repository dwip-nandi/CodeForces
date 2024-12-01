#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    int c=0;
    for(int i=0;i<n;i++)cin>>v[i];  
    for(int j=0;j<n;j++){
        if(v[j]>=v[k-1] && v[j]>0)c++;
    }
    cout<<c<<endl;
}