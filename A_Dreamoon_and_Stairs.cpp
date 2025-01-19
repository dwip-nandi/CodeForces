#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    if (m > n)
        cout << -1 << endl;
    else
    {
        if (n % 2 == 0)
        {
            int d = n / 2;
            if (d % m == 0)
                cout << d << endl;
            else
            {
                int x = d / m;
                cout << (x + 1) * m << endl;
            }
        }
        else
        {
            int d = (n + 1) / 2;
            if (d % m == 0)
                cout << d << endl;
            else
            {
                int x = d / m;
                cout << (x + 1) * m << endl;
            }
        }
    }
}