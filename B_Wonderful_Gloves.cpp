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
        vector<int> va(n);
        vector<int> vb(n);
        for (int i = 0; i < n; i++)
        {
            cin >> va[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> vb[i];
        }
        long long sum = 0;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            if (va[i] >= vb[i])
            {
                sum += va[i];
                v.push_back(vb[i]);
            }
            else
            {
                sum += vb[i];
                v.push_back(va[i]);
            }
        }
        sort(v.rbegin(), v.rend());
        for (int i = 0; i < (k - 1); i++)
            sum += v[i];

        cout << sum + 1 << endl;
    }
}