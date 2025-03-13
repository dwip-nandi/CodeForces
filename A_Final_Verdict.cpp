/*#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int>v(n);
        long long sum =0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            sum += v[i];
        }
        int ans =(sum/n);
        if(ans==x)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int>v(n);
        long long sum=0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            sum +=v[i];
        }
        if(sum == n*x)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}