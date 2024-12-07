/*#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    int n = s.length();
    if (n == 1)
    {
        cout << -1 << endl;
        return;
    }
    else
    {
        for (int i = 0; i < n - 1; ++i)
        {
            for (int j = 0; j < n - 1; j++)
            {
                if(i==j)continue;
                if (s[i] == s[j])
                {
                    cout << s[i] << s[j] << endl;
                    return;
                }
            }
        }
    }
    cout << s[0] << s[1] << s[2] << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;
    int n = s.size();
    string res = "-1";
    for (int i = 0; i < n - 1; i++) {
      if (s[i] == s[i + 1]) {
        res = s.substr(i, 2);
        break;
      }
    }
    for (int i = 0; i < n - 2; i++) {
      if (res == "-1" && s[i] != s[i + 2]) {
        res = s.substr(i, 3);
        break;
      }
    }
    cout << res << endl;
  }


int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

/*#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;
    int n = int(s.size());
    string res = "-1";
    for (int i = 0; i < n - 1; i++) {
        if (s[i] == s[i + 1]) {
            res = s.substr(i, 2);
            break;
        }
    }
    if (res == "-1" && n >= 3) {
        res = s.substr(0, 3);
    }
    cout << res << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}*/
