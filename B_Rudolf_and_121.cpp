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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        bool isPossible = true;
        for (int i = 1; i < n - 1; i++)
        {
            if ((v[i] - (v[i - 1] * 2)) < 0 || (v[i + 1] - v[i - 1]) < 0)
            {
                isPossible = false;
                break;
            }
            else
            {
                v[i] = v[i] - (v[i - 1] * 2);
                v[i + 1] = v[i + 1] - v[i - 1];
            }
        }
        if (v[n - 2] > 0 || v[n - 1] > 0)
            isPossible = false;

        if (isPossible)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}