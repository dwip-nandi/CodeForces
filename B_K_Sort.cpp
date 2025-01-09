#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        long long sum = 0,maxSum=0;
        for(int i=0;i<n-1;i++){
            if(v[i]>v[i+1]){
               int newSum=v[i]-v[i+1];
               sum = sum +newSum;
               v[i+1]=v[i];
               if(newSum>maxSum){
                  maxSum=newSum;
               }
               
            }
            //cout<<sum<<' ';
        }
        //cout<<endl;
        //cout<<sum<<' '<<maxSum<<endl;
        cout<<sum+maxSum<<endl;
    }
}