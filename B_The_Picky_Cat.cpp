#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        vector<int>vr;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            vr.push_back(abs(v[i]));
        }
        int first = v[0];
        sort(vr.rbegin(),vr.rend());
        int x=0;
        if(n%2==0)x=(n/2)-1;
        else x= (n/2);

        if(abs(first)>vr[x])cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}