

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>f(102,0);
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            f[x]++;
        }

        for(int i=0;i<=100;i++){
            if(f[i]==0){
                cout<<i<<endl;
                break;
            }
        }
    }
}