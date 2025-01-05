#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    string s="abcdefghijklmnopqrstuvwxyz";
    while(t--){
        int n;
        cin>>n;
        map<char,int>mp;
        for(int i=0;i<s.size();i++)mp[s[i]]=0;
        //for(auto x:mp)cout<<x.first<<" "<<x.second<<endl;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
            for(auto x:mp){
                if(x.second==v[i]){
                    cout<<x.first;
                    mp[x.first]++;
                    break;
                }
            }
        }
        cout<<endl;
    }
}