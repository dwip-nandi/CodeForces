/*#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin >> t;
    while(t--){
        int x;
        cin >> x;
        int y, z;
        int ans = 0;
        bool isPosible = false;
        for(int y = x - 1; y > 0; y--){
            z = x ^ y;
            if(x + y > z && x + z > y && y + z > x){
                isPosible = true;
                ans = y;
                break;
            }
        }
        if(isPosible) cout << ans << endl;
        else cout << -1 << endl;
    }
}*/
//optimize 
/*#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin >> t;
    while(t--){
        int x;
        cin >> x;
        int ans = -1;
        for(int y = sqrt(x); y < x; y++){
            int z = x ^ y;
            if(y < z && x + y > z && x + z > y && y + z > x){
                ans = y;
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}*/
// update
#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int x;
        cin >> x;
        int y, z;
        int ans = 0;
        bool isPosible = false;
        for(int i =0; i<= 30; i++){
            y =(1<<i)-1;
            z = x ^ y;
            if(x + y > z && x + z > y && y + z > x){
                isPosible = true;
                ans = y;
                break;
            }
        }
        if(isPosible) cout << ans << endl;
        else cout << -1 << endl;
    }
}