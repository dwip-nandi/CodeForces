#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,i,total=0;
    cin >> n;
    vector<int> v(n);
    for ( i = 0; i < n; i++) {
        cin >> v[i];
        total+=v[i];
    }
    sort(v.rbegin(), v.rend());
    int c=0,max=0;
    while (max<=(total/2))
    {
         max+=v[c];
         c++;
    }
    //cout<<max<<endl;
    cout<<c<<endl;
    return 0;
}
