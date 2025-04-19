#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
     while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int x=1,y=n;
        list<int>li;
        for(int i=n-2;i>=0;i--){
            if(s[i]=='<'){
                li.push_front(x);
                x++;
            }else {
                li.push_front(y);
                y--;
            }
        }
        int sum=0;
        for(auto it:li){
            sum +=it;
        }
        int ss=(n*(n+1))/2;
        li.push_front(ss-sum);

        for(auto it:li)cout<<it<<' ';
        cout<<endl;
     }
}