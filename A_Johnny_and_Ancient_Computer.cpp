#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fast_io                  \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

void query()
{
    int a, b;
    cin >> a >> b;
    int c = 0;
    if (a == b)
    {
        cout << 0 << endl;
        return;
    }
    else
    {
        if (a > b)
            swap(a, b);
        while (a < b)
        {
            if (a * 8 <= b)
            {
                a *= 8;
                c++;
            }
            else if (a * 4 <= b)
            {
                a *= 4;
                c++;
            }
            else
            {
                a *= 2;
                c++;
            }
        }
        if (a == b)
            cout << c << endl;
        else
            cout << -1 << endl;
    }
}

signed main()
{
    fast_io;
    int t;
    cin >> t;
    while (t--)
    {
        query();
    }
    return 0;
}