#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        k++;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int sum = 0, i = 0;
        while (k > 0 && i < (n - 1))
        {
            long long x = 1;
            for (int j = 0; j < (v[i + 1] - v[i]); j++)
            {
                x *= 10;
            }
            x--;
            // cout << x << ' ';
            if (k < (x + 1))
                break;

            long long base = 1;
            for (int j = 0; j < v[i]; j++)
            {
                base *= 10;
            }
            sum += (base * x);

            k -= x;
            i++;

            // cout << sum << ' ';
        }
        if (k > 0)
        {
            long long base = 1;
            for (int j = 0; j < v[i]; j++)
            {
                base *= 10;
            }
            sum += (base * k);
        }
        cout << sum << endl;
    }
}