#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int mx =max(c,max(a,b));
    int mn =min(c,min(a,b));
    cout<<mx-mn<<endl;
}