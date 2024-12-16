/* #include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int strlen = s.size();
        int n;
        cin >> n;
        while (n--)
        {
            int p, q;
            cin >> p >> q;
            p--;
            bool isfeb = false;
            if (strlen >= 4)
            {
                s[p] = '0' + q; // cout<<s<<endl;
                for (int i = 0; i < strlen - 3; i++)
                {
                    if(s.substr()=="1100")isfeb = true;
                    //if (s[i] == '1' && s[i + 1] == '1' && s[i + 2] == '0' && s[i + 3] == '0')
                       // isfeb = true;
                }
            }
            if (isfeb)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
}
*/

/*
#include <bits/stdc++.h>
using namespace std;
void solve() {
    string s;
    cin >> s;
    int q;
    cin >> q; 
    int n = s.size();
    for (int i = 0; i < q; i++) {
        int p;
        char v;
        cin >> p >> v;
        p--;  
        s[p] = v;
        //cout<<s<<endl;
        int ans = 0;
        for (int j =0; j <=n-4; j++) {
            ans += s.substr(j, 4) == "1100";
        }
        //cout<<ans<<endl;
        cout << (ans ? "YES" : "NO") << "\n";
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}
*/

//max optimize code

#include <bits/stdc++.h>
using namespace std;
void solve() {
    string s;
    cin >> s;
    int q;
    cin >> q; 
    int n = s.size();
    int ans = 0;
    for (int i = 0; i < n - 3; i++) {
        ans += s.substr(i, 4) == "1100";
    }   
    for (int i = 0; i < q; i++) {
        int p;
        char v;
        cin >> p >> v;
        p--;    
        for (int j = max(0, p - 3); j <= min(p, n - 4); j++) {
            ans -= s.substr(j, 4) == "1100";
        }
        s[p] = v;
        for (int j =max(0, p - 3); j <=min(p, n - 4); j++) {
            ans += s.substr(j, 4) == "1100";
        }
        cout << (ans ? "YES" : "NO") << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}
