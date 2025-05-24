#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long l, r, k;
        cin >> l >> r >> k;
        long long x = r / k;
        long long count = (x - l) + 1;
        if (count <= 00)
            cout << '0' << endl;
        else
            cout << count << endl;
    }
}
int main()
{
    solve();
    return 0;
}
