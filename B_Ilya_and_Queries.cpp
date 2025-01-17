/*#include<bits/stdc++.h>
using namespace std;
int main(){
    string s; cin>>s;
    int n=s.size();
    int m; cin>>m;
    while(m--){
        int a,b,c=0; cin>>a>>b;
        for(int i=a-1;i<b-1;i++){
            if(s[i]==s[i+1])c++;
        }
        cout<<c<<endl;
    }
}*/
//optimize code
/*#include<bits/stdc++.h>
using namespace std;
int main() {
    string s; 
    cin >> s;
    int n = s.size();
    vector<int> prefix(n, 0);

    for (int i = 1; i < n; ++i) {
        prefix[i] = prefix[i-1] + (s[i] == s[i-1]);
    }
    for(auto u:prefix)cout<<u<<' ';
    cout<<endl;
    int m; 
    cin >> m;
    while (m--) {
        int a, b; 
        cin >> a >> b;
        cout << prefix[b-1] - prefix[a-1] << endl;
    }

    return 0;
}*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    string s; cin>>s;
    int n=s.size();
    vector<int>v(n,0);
    for(int i=1;i<n;i++){
        v[i]=v[i-1]+(s[i]==s[i-1]);
    }
    int m; cin>>m;
    while(m--){
      int a,b; cin>>a>>b;
      cout<<v[b-1]-v[a-1]<<endl;      
    }    
}
