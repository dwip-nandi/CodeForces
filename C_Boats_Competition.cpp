#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        map<int,int>mp;
        for(int i=0;i<n;i++){
            cin>>v[i];
            mp[v[i]]++;
        }
        int tc=0;
        for(int i=2;i<=2*n;i++){
            int cc=0;
            for(auto const&[w,c]:mp){
                  int ta=i-w;
                  if(ta>0 && mp.count(ta)){
                     cc +=min(c,mp.at(ta));
                  }
            }
            tc = max(tc,cc/2);
        }
        cout<<tc<<endl;
    }
}