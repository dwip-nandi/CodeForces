#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        vector<string>grid(8);
        for(int i=0;i<8;i++){
            cin>>grid[i];
        }
        bool isRead=false;
        for(int i=0;i<8;i++){
            if(grid[i]=="RRRRRRRR"){
               isRead=true;
               break;
            }
        }
        if(isRead){
            cout<<"R"<<endl;
        }else cout<<"B"<<endl;
        
    }
}