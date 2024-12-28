/* #include <bits/stdc++.h>
using namespace std;
int main() {

    string s;
    cin >> s;
    
    int ans = 0;
    set<string> a;
    for (int i = 0; i < s.size(); i++) {
        for (int j = i; j < s.size(); j++) {
            auto t = s.substr(i, j - i + 1);
            if (a.count(t)) {
                ans = max(ans, int(t.size()));
            } else {
                a.insert(t);
            }
        }
    }
    cout << ans << "\n";
    
    return 0;
}*/

//optimize code

#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;

    int ans = 0;
    set<string> substrings;
    for (int len = 1; len <= s.size(); len++) {
        for (int i = 0; i <= s.size() - len; i++) {
            string t = s.substr(i, len);
            if (substrings.count(t)) {
                ans = max(ans, len);
            } else {
                substrings.insert(t);
            }
        }
    }
    cout << ans <<endl;
    return 0;
}

