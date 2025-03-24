#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int d=(a-b)*c;
    int i=0,n=0;
    while(n<d){
        n += b;
        i++;
    }
    cout<<i<<endl;

}