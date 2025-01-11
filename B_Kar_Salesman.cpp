#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> cars(n);
        int max1=0,sum=0;
        for (int i = 0; i < n; ++i) {
            cin >> cars[i];
            max1 =max(max1,cars[i]);
            sum +=cars[i];
        }
        int l=max1,u=sum;
        int customers = 0;
        while (l<=u) {
            int mid=(l+u)>>1;
            int total=mid*x;
            if(total>=sum){
                customers = mid;
                u=mid-1;
            }else{
                l=mid+1;
            }
        }
        cout << customers << endl;
    }
    return 0;
}
