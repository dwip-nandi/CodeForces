#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        string r;
        r += tolower(s[0]);
        for( int i=1;i<n;i++){
            if(tolower(s[i]) != tolower(s[i-1])){
                r += tolower(s[i]);
            }
        }
        if(r == "meow")cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
/*#include <bits/stdc++.h>
using namespace std;

string simplify(string s) {
    string result;
    result += tolower(s[0]);
    for (int i = 1; i < s.size(); i++) {
        if (tolower(s[i]) != tolower(s[i - 1])) {
            result += tolower(s[i]);
        }
    }
    return result;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        string simplified = simplify(s);

        if (simplified == "meow") {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}*/
