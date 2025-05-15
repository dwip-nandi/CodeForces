#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int l, r;
        cin >> l >> r;
        int result=0;
        if(l%2==0)l++;
        if(((r-l)+1)<3)cout<<0<<endl;
        else if(((r-l)+1)==3)cout<<1<<endl;
        else{
            int x=((r-l)+1)/4;
            int y=((r-l)+1)%4;
            if(y==3)
              cout<<x+1<<endl;
            else cout<<x<<endl;
        }

    }
    return 0;
}
