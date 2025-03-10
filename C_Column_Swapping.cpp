#include<bits/stdc++.h>
using namespace std;

#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<vector<int>> va(n, vector<int>(m));
        vector<vector<int>> vb(n, vector<int>(m));

        int indx=-1;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin>>va[i][j];
            }
            vb[i] = va[i];
            sort(vb[i].begin(), vb[i].end());
            if(va[i] != vb[i]){
                indx = i;
            }
        }

        int p=0, q=0;
        if(indx == -1) {
            cout<<1<<' '<<1<<endl;
        } else {
            for(int k=0; k<m; k++){
                if(va[indx][k] != vb[indx][k]){
                    p = k;
                    break;
                }
            }
            for(int k=m-1; k>=0; k--){
                if(va[indx][k] != vb[indx][k]){
                    q = k;
                    break;
                }
            }
            for(int i=0; i<n; i++){
                swap(va[i][p], va[i][q]);
            }
            int ans = -1;
            for(int i=0; i<n; i++){
                if(va[i] != vb[i]){
                    ans = 1;
                    break;
                }
            }
            if(ans == 1) cout<<-1<<endl;
            else cout<<p+1<<' '<<q+1<<endl;
        }
    }
}
