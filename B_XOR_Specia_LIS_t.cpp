#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<long long> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        bool isPossible = false;
        if (n % 2 == 0)
            isPossible = true;
        else
        {
            for (int i = 0; i < n - 1; i++)
            {
                if (v[i] >= v[i + 1])
                {
                    isPossible = true;
                }
            }
        }
        if (isPossible)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}