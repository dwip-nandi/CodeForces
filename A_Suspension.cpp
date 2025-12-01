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
        int y, r;
        cin >> y >> r;

        if ((r + (y / 2)) >= n)
            cout << n << endl;
        else
            cout << r + (y / 2) << endl;
    }
}