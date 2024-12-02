#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int x=n/5;
    int y=n%5;
    if(y==0)cout<<x<<endl;
    else cout<<x+1<<endl;
    return 0;
}