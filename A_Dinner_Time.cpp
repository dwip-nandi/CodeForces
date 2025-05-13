#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,p,q;
        cin>>n>>m>>p>>q;
        int arr[n+2];
        long long sum = 0;
        for(int i=1;i<=n;i++){
            if(i%p==0){
                arr[i]=q;
            }else arr[i]=0;

            sum += arr[i];
        }

        if(sum == m || arr[n]==0)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}