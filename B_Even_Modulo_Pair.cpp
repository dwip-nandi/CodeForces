/*#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int &x : a) cin >> x;

        bool found = false;
        for (int i = 0; i < n && !found; ++i) {
            for (int j = i + 1; j < n; ++j) {
                if ((a[j] % a[i]) % 2 == 0) {
                    cout << a[i] << " " << a[j] << "\n";
                    found = true;
                    break;
                }
            }
        }
        if (!found) cout << "-1\n";
    }
    return 0;
}
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++) cin>>v[i];

        bool is = false;
        for(int i=0;i<n && !is ;i++){
            for(int j=i+1;j<n;j++){
                  if((v[j]%v[i])%2==0){
                      cout<<v[i]<<' '<<v[j]<<endl;
                      is = true;
                      break;
                  }
            }
        }
        if(!is)cout<<-1<<endl;
    }
}