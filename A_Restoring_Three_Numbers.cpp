#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int x=max(a,max(b,max(c,d)));
    if(x==a){
        cout<<x-c<<" "<<x-b<<" "<<x-d<<endl;    
    }else if(x==b){ 
        cout<<x-c<<" "<<x-a<<" "<<x-d<<endl;    
    }else if(x==c){ 
        cout<<x-a<<" "<<x-b<<" "<<x-d<<endl;    
    }else if(x==d){         
        cout<<x-c<<" "<<x-b<<" "<<x-a<<endl;    
    }
    return 0;
}