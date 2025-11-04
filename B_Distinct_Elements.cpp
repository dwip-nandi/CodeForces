#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n),res;
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int new_val =1;
        res.push_back(1);
        for(int i=1;i<n;i++){
            int dif = v[i]-v[i-1];
            if(dif == (i+1)){
                new_val++;
                res.push_back(new_val);
            }else{
                res.push_back(res[i-dif]);
            }
        }
        for(auto x:res)cout<<x<<' ';
        cout<<endl;

    }
}