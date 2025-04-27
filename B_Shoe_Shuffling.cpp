/*#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        vector<int>in(n);
        vector<int>result;
        map<int,int>mp;
        for(int i=0;i<n;i++){
            cin>>v[i];
            in[i]=i+1;
        }
        bool ispossible=true;
        for(int i=0;i<n-1;i++){
            if(v[i]==v[i+1]){
                result.push_back(in[i+1]);
                swap(in[i],in[i+1]);
                mp[i]++;
                mp[i+1]++;
            }else{
                if(mp[i]!=0){
                    result.push_back(in[i]);
                }else{
                    ispossible=false;
                    break;
                }
            }
        }
        if(mp[n-1]!=0)result.push_back(in[n-1]);
        if(ispossible){
            for(auto u:result){
                cout<<u<<' ';
            }cout<<endl;
        }
        else cout<<-1<<endl;
    }
}*/


#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
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
        vector<int>vr;
        bool isPossible=true;
        for(auto it:mp){
            vr.push_back(it.second);
            if(it.second<2){
               isPossible=false;
               break;
            }
        }
        if(!isPossible)cout<<-1<<endl;
        else {
            int x=0;
            for(int i=0;i<vr.size();i++){
                cout<<vr[i]+x<<' ';
                for(int j=x+1;j<(x + vr[i]);j++){
                    if(j>(x + vr[i]))break;
                    cout<<j<<' ';
                    //x++;
                }
                //cout<<x<<' ';
                x +=vr[i];
            }cout<<endl;    
        }
    }
}