#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int f=n;
    int x=0;
    while(n>=m){
        x += n/m;
        n = n/m + n%m;
    }
    cout<<f+x<<endl;
}