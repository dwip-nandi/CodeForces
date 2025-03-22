#include <iostream>
#include <algorithm> 
using namespace std;

void solve() {
    int x, n, m, y;
    cin >> x >> n >> m;
    y = x;
    m = min(m, 31);
    n = min(n, 31);
    x >>= n;

    for (int i = 1; i <= m; i++) {
        x = (x + 1) / 2;
        y = (y + 1) / 2;
    }
    y >>= n;

    cout << min(x, y) << ' ' << max(x, y) << endl;
}

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int t;
    cin >> t; 

    while (t--) {
        solve();
    }

    return 0;
}


/*#include <bits/stdc++.h>
using namespace std;
int main(){ 
    int t;
    cin>>t; 
    while(t--){
        int x,y,n,m;
        cin>>x>>y>>n>>m;
        y=x;
        for(int i=1;i<=n;i++){
            x /= 2;
            if(x<=0)break;
        }
        for(int i=1;i<=m;i++){
            x =(x+1)/2;
            if(x<=0)break;
        }
        for(int i=1;i<=n;i++){
            y = (y+1)/2;
            if(y<=0)break;
        }
        for(int i=1;i<=m;i++){
            y /=2;
            if(y<=0)break;
        }
        cout<<min(x,y)<<' '<<max(x,y)<<endl;
    } 
}*/