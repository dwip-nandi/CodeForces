#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int r, x, d, n;
        cin >> r >> x >> d >> n;
        string s;
        cin >> s;
        int c = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                c++;
                if (r > d)
                    r -= d;
                else
                    r = 0;
            }
            else 
            {
                if (r < x)
                {
                    c++;
                    if (r > d)
                        r -= d;
                    else
                        r = 0;
                }
            }
        }
        cout<<c<<endl;
    }
}