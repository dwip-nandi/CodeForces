#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, max = 0;
        cin >> n;
        vector<int> v(n);
        // vector<int>v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] > max)
                max = v[i];
            if (i % 2 == 1 && v[i] < max)
                v[i] = max;
        }
        // for (auto x : v)
        //     cout << x << ' ';
        // cout << endl;
        int c = 0;
        if (n == 2)
        {
            if (v[0] >= v[1])
            {
                c += (v[0] - v[1]);
                c++;
                cout<<c<<endl;
            }
            else
                cout << 0 << endl;
        }
        else
        {
            for (int i = 1; i < n - 1; i += 2)
            {
                if (v[i - 1] >= v[i])
                {
                    c += (v[i - 1] - v[i]);
                    // cout<<v[i]<<v[i-1]<<endl;
                    // cout<<c<<endl;
                    c++;
                    // cout<<c<<endl;
                }

                if (v[i + 1] >= v[i])
                {
                    int x = (v[i + 1] - v[i]);
                    c += x;
                    c++;
                    // cout<<c<<endl;
                    v[i + 1] = v[i + 1] - (x + 1);
                }
            }
            cout << c << endl;
        }
    }
}