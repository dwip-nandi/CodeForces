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
        vector<int> va(n);
        vector<int> vb(n);
        int max = 0, mn = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            cin >> va[i];
            if (va[i] > max)
                max = va[i];
            if (va[i] < mn)
                mn = va[i];
        }
        for (int i = 0; i < n; i++)
            cin >> vb[i];

        set<int> st;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (vb[i] != -1)
            {
                sum = va[i] + vb[i];
                st.insert(sum);
            }
        }
        if (st.size() == 0)
        {
            cout <<(( k+mn)-max)+1<< endl;
        }
        else if (st.size() > 1)
            cout << 0 << endl;
        else if (st.size() == 1 && (sum - mn) > k)
            cout << 0 << endl;
        else if (st.size() == 1 && sum >= max)
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }
}