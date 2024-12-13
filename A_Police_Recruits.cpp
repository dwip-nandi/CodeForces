#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    int  positive_value=0,neg=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(v[i]==-1){
            if(positive_value==0){
                neg++;
            }else positive_value --;
        }else positive_value += v[i];
    }
    cout<<neg<<endl;
}