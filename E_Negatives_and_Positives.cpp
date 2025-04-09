#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,c=0,mn=INT_MAX;
        cin>>n;
        vector<int>v(n);
        long long sum=0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            sum += abs(v[i]);
            if(abs(v[i])<mn)mn=abs(v[i]);
            if(v[i]<0)c++;
        }
        //cout<<mn<<c<<endl;
        if(c%2==0)cout<<sum<<endl;
        else cout<<sum-(2*mn)<<endl;
    }
}