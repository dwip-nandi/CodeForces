#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        long long x;
        cin >> n >> k >> x;
        vector<long long> v(n);
        vector<long long> ps;
        long long sum = 0;
        for (long long i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        reverse(v.rbegin(), v.rend());
        for (long long i = 0; i < n; i++)
        {
            sum += v[i];
            ps.push_back(sum);
        }
        long long y = x / sum;
        long long z = x % sum;
        long long l = 0, r = n - 1;
        long long result = -1;
        while (l <= r)
        {
            long long mid = (l + r) / 2;
            if (ps[mid] >= z)
            {
                result = mid;
                // break;
                r = mid - 1;
            }
            else
                l = mid + 1;
        }
        // for(auto it:ps)cout<<it<<' ';
        // cout<<endl;
        // cout<<result<<endl;

        if (k < (x + sum - 1) / sum)
            cout << 0 << endl;
        else if (z == 0)
        {
            cout << (n * k) - (y * n) + 1 << endl;
        }
        else
        {
            cout << (n * k) - ((y * n) + result + 1) + 1 << endl;
        }
    }
}