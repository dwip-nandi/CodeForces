#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,ans=INT_MAX;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        int gcd = v[0];
        for (int i = 1; i < n; i++) {
            gcd = __gcd(gcd, v[i]);
        }

        if (gcd == 1) {
            cout << 0 << endl;
        } else {
            int cost = INT_MAX;
            for (int i = n - 1; i >= 0; i--) {
                int x = v[i], g = v[0];
                v[i] = __gcd((i + 1), x);
                for (int j = 0; j < n; j++) {
                    g = __gcd(g, v[j]);
                }
                if (g == 1) {
                    ans= n - i ;
                    break;
                } else {
                    v[i] = x;
                }
            }
            int cost2=INT_MAX;
            for(int i=0;i<n;i++){
                int y=v[i];
                v[i]=__gcd(v[i],(i+1));
                for(int j=i+1;j<n;j++){
                    int z=v[j];
                    v[j]=__gcd(v[j],(j+1));
                    int g2=v[0];
                    for(int k=1;k<n;k++){
                        g2=__gcd(g2,v[k]);
                    }
                    if(g2==1){
                       ans=min(ans,((n-i)+(n-j)));
                    }
                    v[j]=z;
                }
                v[i]=y;
            }
            //cout<<cost2<<endl;
            cout<<ans<<endl;;
        }
    }
    return 0;
}
