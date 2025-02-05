#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int arr[n];
        bool isPosible =true;
        for(int i=1;i<=n;i++){
            cin>>arr[i];
            long long x =max((2*(i-1)),(2*(n-i)));
            if(arr[i]<=x)isPosible = false;
        }
        if(isPosible)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}