// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         vector<int>v(n);
//         for(int i=0;i<n;i++)cin>>v[i];
//         if(n%2==0)cout<<"YES"<<endl;
//         else{
//             sort(v.begin(),v.end());
//             if(v[n-1]==v[n-2])cout<<"YES"<<endl;
//             else cout<<"NO"<<endl;
//         }
//     }
// }

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++)cin>>v[i];
        sort(v.begin(),v.end());
        bool is=true;
        for(int i=1;i<n-1;i+=2){
            if(v[i]!=v[i+1]){
                is = false;
                break;
            }
        } 
        if(is)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
