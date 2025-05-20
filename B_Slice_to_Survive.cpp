#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,a,b;
        cin>>n>>m>>a>>b;
        int x = min(a,(n-a)+1);
        int y = min(b,(m-b)+1);

        cout<<min((ceil(log2(x))+ceil(log2(m))),(ceil(log2(y))+ceil(log2(n))))+1<<endl;
    }
}