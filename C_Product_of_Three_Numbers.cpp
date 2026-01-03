#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);

void query() {
    int n;
    cin >> n;
    int a=-1,b=-1,c=-1;
    for(int i=2;i*i<n;i++){
        if(n%i==0){
            a=i;
            break;
        }
    }
    if(a!=-1){
        int r=n/a;
        for(int i=a+1;i*i<=r;i++){
            if(r%i==0){
                b=i;
                c=r/i;
                break;
            }
        }
    }

    if(a!=-1 && b!=-1 && c!=-1 && b!=c){
        cout << "YES" << endl;
        cout<<a<<' '<<b<<' '<<c<<endl;
    }else cout<<"NO"<<endl;
}

signed main() {
    fast_io;
    int t;
    cin >> t;
    while (t--) {
        query();
    }
    return 0;
}
