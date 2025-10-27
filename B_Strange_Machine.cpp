#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        string s;
        cin >> s;

        bool hasB = false;
        for (char ch : s)
            if (ch == 'B')
            {
                hasB = true;
                break;
            }

        char arr[600];
        int ii = 0;
        for (int i = 0; i < 600; i++)
        {
            arr[i] = s[ii];
            ii++;
            if (ii == n)
                ii = 0;
        }

        vector<int> qu(q);
        for (int i = 0; i < q; i++)
            cin >> qu[i];

        for (int i = 0; i < q; i++)
        {
            int a = qu[i], c = 0;

            if (!hasB)
            {
                cout << a <<endl;
                continue;
            }

            for (int j = 0; j < 600; j++)
            {
                if (arr[j] == 'A')
                {
                    a--;
                    c++;
                }
                else
                {
                    a = a / 2;
                    c++;
                }

                if (a <= 0)
                    break;
            }
            cout << c <<endl;
        }
    }
}
