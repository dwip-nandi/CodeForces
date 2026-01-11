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
        string s;
        cin >> s;
        vector<int> va(n, 1);
        vector<int> vb(n, 1);
        bool is = true;
        for (int i = 1; i < n; i++)
        {
            if (s[i] == '0')
            {
                va[i] = 0;
                vb[i] = 0;
                continue;
            }
            if (s[i] == '1' && is)
            {
                is = false;
                vb[i] = 0;
                continue;
            }
            if (!is)
            {
                if (s[i] == '2')
                {
                    va[i] = 0;
                    vb[i] = 2;
                }
                else if (s[i] == '1')
                {
                    va[i] = 0;
                }
            }
        }
        for (auto it : va)
            cout << it;
        cout << endl;
        for (auto it : vb)
            cout << it;
        cout << endl;
    }
}