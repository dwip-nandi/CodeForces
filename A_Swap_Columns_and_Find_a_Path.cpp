#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<vector<int>>matrix(2,vector<int>(n));
    for(int i=0;i<2;i++){
        for(int j=0;j<n;j++){
            cin>>matrix[i][j];
        }
    }
    int result = -1e18;
    for(int j=0;j<n;j++){
        int pathChangeSum = matrix[0][j]+matrix[1][j];
        for(int k=0;k<n;k++){
            if(k==j)continue;

            pathChangeSum +=max(matrix[0][k],matrix[1][k]);
        }
    result = max(result,pathChangeSum);
    }
cout<<result<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}