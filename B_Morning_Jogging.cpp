#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<int>v[n];
        vector<int>rv[n];

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int x;
                cin>>x;
                v[i].push_back(x);
            }
        }
        for(int i=0;i<n;i++){
            sort(v[i].begin(),v[i].end());
        }

        for(int i=0;i<m;i++){
            int mn =INT_MAX;
            int ind = -1;
            for(int j=0;j<n;j++){
                if(v[j][0]<mn){
                    mn =v[j][0];
                    ind = j;
                }
            }
            for(int j=0;j<n;j++){
                if(j==ind){
                    rv[j].push_back(v[j][0]);
                    v[j].erase(v[j].begin());
                }else{
                    rv[j].push_back(v[j][v[j].size()-1]);
                    v[j].pop_back();
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<rv[i][j]<<' ';
            }cout<<endl;
        }

    }

}