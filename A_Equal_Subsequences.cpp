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
        if (k > 0)
        {
            if (n == k)
            {
                for (int i = 0; i < n; i++)
                    cout << 1;
                cout << endl;
            }
            else
            {
                if (n == 2)
                    cout << 10 << endl;
                else
                {
                    int x = n -( k + 2);
                    cout << 1;
                    for (int i = 0; i <= x; i++)
                        cout << 0;
                    for (int i = 0; i < k - 1; i++)
                        cout << 1;
                    cout << 0 << endl;
                }
            }
        }
        else
        {
            for (int i = 0; i < n; i++)
                cout << 0;
            cout << endl;
        }
    }
}
