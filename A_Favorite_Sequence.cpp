#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long>v(n);
        for(int i=0;i<n;i++)
           cin>>v[i];
        
        int l=0,r=n-1;
        while(l<r){
            cout<<v[l]<<' '<<v[r]<<' ';
            l++;
            r--;
        }
        if(n%2==1)cout<<v[r];
        cout<<endl;
    }
}