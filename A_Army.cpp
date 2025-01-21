#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v(n-1);
    for(int i=0;i<n-1;i++)cin>>v[i];

    int a,b; cin>>a>>b;
    long long s=0;
    for(int i=a-1;i<b-1;i++){
        s +=v[i];
    }
    cout<<s<<endl;
}