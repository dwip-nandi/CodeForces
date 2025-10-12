#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n), f(n+1,0);
        for(int i=0;i<n;i++){
            cin>>a[i];
            f[a[i]]++;
        }
        int c=0;
        for(int i=0;i<k;i++){
            if(f[i]==0)c++;
        }
        cout<<max(c,f[k])<<endl;
        
    }
    return 0;
}
