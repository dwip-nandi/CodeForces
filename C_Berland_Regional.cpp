// #include<bits/stdc++.h>
// #include<vector>
// using namespace std;
// #define int long long
// signed main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         vector<int>va(n);
//         vector<int>vv(n);
//         for(int i=0;i<n;i++)cin>>va[i];
//         for(int i=0;i<n;i++)cin>>vv[i];

//         vector<int>v(n);
//         vector<int>pre(n);
//         for(int i=1;i<=n;i++){
//           v[va[i]].push_back(vv[i]);
//         }

//         for(int i=1;i<=n;i++){
//             if(v[i].size()==0)continue;
//             sort(v[i].begin(),v[i].end());

//             pre[i].push_back(v[i][0]);

//             for(int j=1;j<v[i].size();j++){
//                 pre[i].push_back(pre[i][j-1]+v[i][j]);
//             }
//         }

//         int ans[n+1];
//         memset(ans,0,sizeof(ans));

//         for(int i=1;i<=n;i++){
//             if(v[i].size()==0)continue;
//             else{
//                 int x=1;
//                 while(x<=v[i].size()){
//                     if(v[i].size()%x==0)ans[x] += pre[i][v[i].size()-1];
//                     else{
//                         m=v[i].size()%x;
//                         m--;
//                         ans += pre[i][v[i].size()-1]-pre[i][m];
//                     }
//                     x++;
//                 }

//             }
//         }

//         for(int i=1;i<=n;i++)cout<<ans[i]<<' ';
//         cout<<endl;
//     }
// }
#include<bits/stdc++.h>
#include<vector>
using namespace std;
#define int long long
signed main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> va(n);
        vector<int> vv(n);
        for (int i = 0; i < n; i++) cin >> va[i];
        for (int i = 0; i < n; i++) cin >> vv[i];

        vector<vector<int>> v(n + 1);
        vector<vector<int>> pre(n + 1);
        for (int i = 0; i < n; i++) {
            v[va[i]].push_back(vv[i]);
        }

        for (int i = 1; i <= n; i++) {
            if (v[i].size() == 0) continue;
            sort(v[i].begin(), v[i].end());

            pre[i].push_back(v[i][0]);

            for (int j = 1; j < v[i].size(); j++) {
                pre[i].push_back(pre[i][j - 1] + v[i][j]);
            }
        }

        vector<int> ans(n + 1, 0);

        for (int i = 1; i <= n; i++) {
            if (v[i].size() == 0) continue;
            else {
                int x = 1;
                while (x <= v[i].size()) {
                    if (v[i].size() % x == 0)
                        ans[x] += pre[i][v[i].size() - 1];
                    else {
                        int m = v[i].size() % x;
                        m--;
                        ans[x] += pre[i][v[i].size() - 1] - pre[i][m];
                    }
                    x++;
                }
            }
        }

        for (int i = 1; i <= n; i++) cout << ans[i] << ' ';
        cout << endl;
    }
}
