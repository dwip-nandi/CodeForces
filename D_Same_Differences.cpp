/*#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n+2];
        int c=0;
        for(int i=1;i<=n;i++){
           cin>>arr[i];
           if(i==arr[i])c++;
        }
        cout<<(c*(c-1))/2<<endl;
    }
}*/
/*#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n+2];
        int c=0;
        for(int i=1;i<=n;i++){
           cin>>arr[i];
        }
        for(int i=1;i<=n;i++){
            for(int j=i+1;j<=n;j++){
                if(arr[j]-arr[i]==j-i)c++;
            }
        }
        cout<<c<<endl;

    }
}*/

// update code
#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n + 1);
        unordered_map<int, int> mp;
        int c = 0;
        for (int i = 1; i <= n; ++i) {
            cin >> arr[i];
            c += mp[arr[i] - i];
            mp[arr[i] - i]++; 
            //cout<<c<<' ';
        }
        //cout<<endl;
        cout << c << endl;
    }
    return 0;
}
