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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int x;
        cin >> x;

        bool found = false;

        if (n == 1)
        {
            found = (v[0] == x);
        }
        else
        {
            for (int i = 0; i < n; ++i)
            {
                if (v[i] == x)
                {
                    found = true;
                    break;
                }
            }

            if (!found)
            {
                for (int i = 0; i < n - 1; ++i)
                {
                    int mn = min(v[i], v[i + 1]);
                    int mx = max(v[i], v[i + 1]);
                    if (x >= mn && x <= mx)
                    {
                        found = true;
                        break;
                    }
                }
            }
        }

        cout << (found ? "YES" : "NO") << endl;
    }
}
