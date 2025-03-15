#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int x = (n) / 7;
    int y = (n + 6) / 7;
    if (n > 1)
        if ((n == (y * 7) - 1))
        {
            cout << x * 2 + 1 << ' ' << y * 2 << endl;
        }
        else if((n == (x * 7) + 1))
            cout << x * 2 << ' ' << y * 2 -1 << endl;
        else
            cout << x * 2 << ' ' << y * 2 << endl;
    else
        cout << 0 << ' ' << 1 << endl;
}