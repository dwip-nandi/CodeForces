#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v(5);
    for(int i=0;i<5;i++)cin>>v[i];
    vector<string>r={"S","M","L","XL","XXL"};
    int k;
    cin>>k;
    while(k--){
        string s;
        cin>>s;
        if(s=="S"){
            for(int i=0;i<5;i++){
                if(v[i]>0){
                    cout<<r[i]<<endl;
                    v[i]--;
                    break;
                }
            }
        }
        if(s=="M"){
            if(v[1]>0){
                cout<<r[1]<<endl;
                v[1]--;
                continue;
            }
            else if(v[2]>0){
                cout<<r[2]<<endl;
                v[2]--;
                continue;
            }
            else if(v[0]>0){
                cout<<r[0]<<endl;
                v[0]--;
                continue;
            }
            else if(v[3]>0){
                cout<<r[3]<<endl;
                v[3]--;
                continue;
            }
            else if(v[4]>0){
                cout<<r[4]<<endl;
                v[4]--;
                continue;
            }
        }
        if(s=="L"){
            if(v[2]>0){
                cout<<r[2]<<endl;
                v[2]--;
                continue;
            }
            else if(v[3]>0){
                cout<<r[3]<<endl;
                v[3]--;
                continue;
            }
            else if(v[1]>0){
                cout<<r[1]<<endl;
                v[1]--;
                continue;
            }
            else if(v[4]>0){
                cout<<r[4]<<endl;
                v[4]--;
                continue;
            }
            else if(v[0]>0){
                cout<<r[0]<<endl;
                v[0]--;
                continue;
            }
        }
        if(s=="XL"){
            if(v[3]>0){
                cout<<r[3]<<endl;
                v[3]--;
                continue;
            }
            else if(v[4]>0){
                cout<<r[4]<<endl;
                v[4]--;
                continue;
            }
            else if(v[2]>0){
                cout<<r[2]<<endl;
                v[2]--;
                continue;
            }
            else if(v[1]>0){
                cout<<r[1]<<endl;
                v[1]--;
                continue;
            }
            else if(v[0]>0){
                cout<<r[0]<<endl;
                v[0]--;
                continue;
            }
        }
        if(s=="XXL"){
            for(int i=4;i>=0;i--){
                if(v[i]>0){
                    cout<<r[i]<<endl;
                    v[i]--;
                    break;
                }
            }
        }
    }
}