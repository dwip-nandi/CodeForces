#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s, r;
        cin >> s;
        r = s;
        reverse(r.begin(), r.end());
        bool isPossible = false;
        if (s < r)
        {
            cout<<"YES"<<endl;
            continue;
        }
        else
        {
            vector<char> st;
            for (int i = 0; i < n; i++)
                st.push_back(s[i]);
            sort(st.rbegin(), st.rend());
            int i = 0;
            while (i < n && k > 0)
            {
                if (r[i] < st[i])
                {
                    isPossible = true;
                    break;
                }
                if(r[i]==st[i])k++;
                i++;
                k--;
            }
        }
        if (isPossible)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}

/*#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,c=0;
        cin>>n>>k;
        string s,r,x;
        cin>>s;
        r=s;
        x=s;
        reverse(r.begin(),r.end());
        bool isPossible = false;
        if(s<r)isPossible=true;
        sort(x.rbegin(),x.rend());
        for(int i=0;i<)

        if(c<=k)isPossible = true;
        if(isPossible)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}*/
/*#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s, r, t;
        cin >> s;
        r = s;
        reverse(r.begin(), r.end());
        t = r;
        sort(t.rbegin(), t.rend());
        if (n == 1)
            cout << "NO" << endl;
        else if (s < r)
            cout << "YES" << endl;
        else
        {
            int i = 0;
            bool isPossible = false;
            while (i < n && k > 0)
            {
                if (s[i] >= r[i])
                {
                    int p = r.find(t[0]);
                    r[p] = r[i];
                    r[i] = t[0];
                    t.erase(t.begin() + 0);
                    k--;
                }
                if (s < r)
                {
                    isPossible = true;
                    break;
                }
                i++;
            }
            if (isPossible)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
}*/
/*#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        set<char> ss;
        for (char c : s) {
            ss.insert(c);
        }
        string r(s);
        sort(r.rbegin(), r.rend());
        string t=s;
        reverse(t.begin(),t.end());
        bool isPossible=false;
        int i=0;
        if(s<t){
            cout<<"YES"<<endl;
            continue;
        }
        while(i<=(n/2) && k>0 ){
            if(s[i]<t[i]){
               isPossible=true;
               break;
            }
            i++;
            k--;
        }
        if(isPossible)cout<<"YES"<<endl;
        else  cout<<"NO"<<endl;
    }
    return 0;
}
*/