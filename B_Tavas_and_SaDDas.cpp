#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    string n;
    cin >> n;
    string s=n;
    reverse(s.begin(), s.end()); 
    int l = n.size();
    int index = pow(2, l) - 1; 
    string str;
    int p=0,sum=0;
    for (int i=0;i<l;i++) {
        if(s[i]=='7') {
            sum += pow(2,i);
        }
        //cout<<sum<<' ';
    }
    //cout<<endl<<index<<sum<<endl;
    cout<<index+sum<<endl;

    return 0;
}
