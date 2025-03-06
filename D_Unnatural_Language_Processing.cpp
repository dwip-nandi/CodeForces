/*#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        for(int i=0;i<n-2;i++){
            if(s[i]!='a' || s[i] !='e')cout<<s[i];
            else{
                cout<<s[i];
                if(s[i+1]!='a'||s[i+1]!='e'){
                    if(s[i+2]!='a'||s[i+2]!='e')cout<<s[i+1];
                    i++;
                }
                if(i!=n-1)cout<<'.';
            }
            
        }
        cout<<endl;
    }
}*/
//update code
#include <bits/stdc++.h>
using namespace std;

bool isVowel(char c) {
    return c == 'a' || c == 'e';
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        string result;
        for(int i = 0; i < n; i++) {
            result += s[i];
            if (isVowel(s[i]) && i < n - 2) {
                if (!isVowel(s[i+1]) && isVowel(s[i+2])) {
                    result += '.';
                }
                else if (!isVowel(s[i+1]) && !isVowel(s[i+2])) {
                    result += s[i+1];
                    i++;
                    result += '.';
                }
            }
        }
        cout << result << endl;
    }
    return 0;
}
