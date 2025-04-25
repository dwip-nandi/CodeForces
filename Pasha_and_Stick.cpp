#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    if(n<6 || n%2==1)cout<<0<<endl;
    else if(n%4==0){
        cout<<(n/4)-1<<endl;
    }else{
        cout<<n/4<<endl;
    }

}