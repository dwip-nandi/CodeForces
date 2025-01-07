#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, b, p;
    cin >> n >> m >> b >> p;
    if (p / m >= b)
    {
        cout << n * b << endl;
        return 0;
    }
    else
    {
        int d = n / m;
        int r = n % m;
        if (r * b <= p)
        {
            cout << ((d * p) + (r)*b) << endl;
        }
        else
        {
            cout << ((d * p) + p) << endl;
        }
    }
}