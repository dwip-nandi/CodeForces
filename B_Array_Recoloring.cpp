// upsolve
#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>v(n);
        for(int i=0;i<n;i++)cin>>v[i];
        if(k==1){
            int ans =0;
            for(int i=0;i<n-1;i++){
                ans = max(ans,(v[n-1]+v[i]));
            }
            for(int i=1;i<n;i++){
                ans = max(ans,(v[0]+v[i]));
            }
            cout<<ans<<endl;
        }else{
            sort(v.rbegin(),v.rend());
            int ans =0;
            for(int i=0;i<=k;i++){
                ans += v[i];
            }
            cout<<ans<<endl;
        }
    }
}

/*#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int x=v[k];
        sort(v.rbegin(),v.rend());
        int sum =0;
        for(int i=0;i<k;i++){
            sum += v[i];
        }
        sum += x;
        cout<<sum<<endl;
    }

}*/
/*#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k; 
        vector<pair<int, int>> arr(n);

        for (int i = 0; i < n; i++) {
            cin >> arr[i].first;
            arr[i].second = i; 
        }

        sort(arr.rbegin(), arr.rend());

        vector<int> ini;
        int ans = 0;

        for (int i = 0; i < k; i++) {
            ans += arr[i].first; 
            ini.push_back(arr[i].second); 
        }

        sort(ini.begin(), ini.end()); 
        int naib = -1; 

        vector<bool> used(n, false); 
        for (int idx : ini) {
            used[idx] = true; 
        }

        for (int idx : ini) {
            if (idx - 1 >= 0 && !used[idx - 1]) { 
                naib = max(naib, arr[idx - 1].first);
            }
            if (idx + 1 < n && !used[idx + 1]) { 
                naib = max(naib, arr[idx + 1].first);
            }
        }

        ans += naib;

        cout << ans << endl;
    }

    return 0;
}*/

/*#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    int t; 
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k; 

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i]; 
        }
        vector<int> sorted_a = a; 
        sort(sorted_a.rbegin(), sorted_a.rend()); 

        int initial_cost = 0;
        for (int i = 0; i < k; i++) {
            initial_cost += sorted_a[i];
        }
        int max_last_painted = 0;
        for (int i = k; i < n; i++) {
            max_last_painted = max(max_last_painted, sorted_a[i]);
        }

        int ans = initial_cost + max_last_painted;
        cout << ans << endl;
    }

    return 0;
}
*/