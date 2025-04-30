/*#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];
        int sum = 0;
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                auto mxit = max_element(v.begin(), v.end());
                int mx = *mxit;
                sum += mx;
                cout << sum << ' ';
                v.erase(mxit);
            } else {
                int lt = v.back();
                sum += lt;
                cout << sum << ' ';
                v.pop_back();
            }
        }
        cout << endl;
    }
    return 0;
}*/
/*#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        if (n == 1)
        {
            cout << v[0] << endl;
            //cout<<"HGDFgdfy"<<endl;
            //return 0;
            //continue;
        }
        else
        {
            reverse(v.begin(), v.end());
            int sum = 0;
            vector<int> pre(n+1, 0);
            for (int i = 0; i < n; i++)
            {
                sum += v[i];
                pre[i + 1] = sum;
            }

            // for(auto u:pre)cout<<u<<' ';
            int result = 0;
            for (int i = 0; i < n; i++)
            {
                auto mxit = max_element(v.begin() + i, v.end());
                int mx = *mxit;
                result = (mx + pre[i]);
                cout << result << ' ';
            }
            cout << endl;
        }
    }
}*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int ms = 0;
        vector<int> v(n);
        vector<int> vms;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (ms < v[i])
                ms = v[i];

            vms.push_back(ms);
        }
        if (n == 1)
            cout << v[0] << endl;
        else
        {
            reverse(v.begin(), v.end());
            vector<int> pre(n + 1, 0);
            // pre[0]=0;
            int sum = 0;
            for (int i = 0; i < n; i++)
            {
                sum += v[i];
                pre[i + 1] = sum;
            }

            // for(auto u:pre)cout<<u<<' ';
            // cout<<endl;
            for (int i = 0; i < n; i++)
            {
                cout << pre[i] + vms[n - (i + 1)] << ' ';
            }
            cout << endl;
        }
    }
}