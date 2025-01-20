/*#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    
    while(m--){
        set<int>s;
        int a; cin>>a;
        for(int i=n-1;i>=(a-1);i--){
            s.insert(v[i]);
        }
        cout<<s.size()<<endl;
    }
}*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    vector<int> track_index(n);
    set<int> s;
    for (int i = n - 1; i >= 0; i--) {
        s.insert(v[i]);
        track_index[i] = s.size();
    }

    while (m--) {
        int a;
        cin >> a;
        cout << track_index[a - 1] << endl;
    }

    return 0;
}
