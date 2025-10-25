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
        int c = 0;
        while (n >= 3)
        {
            int x = n / 3;
            int y = n % 3;
            c += x;
            n = x + y;
        }

        cout << c << endl;
    }
}