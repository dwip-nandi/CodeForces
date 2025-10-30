#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        vector<int>v;
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
               v.push_back(i);
            }
        }
        //for(auto x:v)cout<<x;
        if(v.size()<1)cout<<0<<endl;
        else{
            int c=0;
            for(int i=0;i<v.size()-1;i++){
                if((abs(v[i]-v[i+1])>(k-1)))c++;
            }
            cout<<c+1<<endl;
        }
    }
    
}