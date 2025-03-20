#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, c = 0;
        ;
        cin >> n;
        vector<int> v(n), vo, ve;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] % 2 == 0)
                ve.push_back(v[i]);
            else
                vo.push_back(v[i]);
        }
        // sort(v.rbegin(),v.rend());
        vector<int> re(n + 3);
        for (int i = 0; i < ve.size(); i++)
        {
            re[i] = ve[i];
        }
        for (int i = ve.size(); i < (ve.size() + vo.size()); i++)
        {
            re[i] = vo[i - ve.size()];
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (__gcd(re[i], 2 * re[j]) > 1)
                    c++;
            }
        }
        cout << c << endl;
    }
}