/*#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n;
    cin>>n;
    string s=to_string(n);
    ll l=s.size();
    int c=0;
    for(int i=1;i<=n;i++){
        string s=to_string(i);
        ll l=s.size();
        bool isTrue=true;
        for(char c:s){
            if(c!='1' && c!='0'){
               isTrue=false;
               break;
            }
        }
        if(isTrue)c++;
    }
    cout<<c<<endl;
}*/
// update code
#include <iostream>
using namespace std;
#define ll long long
ll td(ll b) {
    ll ans = 0;
    ll cp = 1;
    while (b) {
        ans += cp * (b & 1);
        cp *= 10;
        b >>= 1;
    }
    return ans;
}

int main() {
    ll n;
    cin>>n;
    int ans = 0;

    for (ll i = 1;; i++) {
        ll cv = td(i);
        if (cv > n) break;
        ans++;
    }

    cout<<ans<<endl;
}
