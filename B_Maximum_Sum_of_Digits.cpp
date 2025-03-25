/*#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int n, x, y;
    cin >> n;
    if (n % 2 == 0)
    {
        x = (n / 2) + 1;
        y = x - 2;
    }
    else
    {
        x = n / 2;
        y = x + 1;
    }
    int sum = 0;
    while (x > 0)
    {
        int m = x % 10;
        sum += m;
        x /= 10;
    }
    while (y > 0)
    {
        int m = y % 10;
        sum += m;
        y /= 10;
    }
    cout << sum << endl;
}*/
// optimize code
#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int n;
    cin >> n;
    string s = to_string(n);
    int a = 0;
    for (int i = 0; i < s.size() - 1; i++)
    {
        a += 9;
        a *= 10;
    }
    a /= 10;
    int b = n - a;
    int sum = 0;
    while (b > 0)
    {
        sum += (b % 10);
        b /= 10;
    }
    cout << (sum + ((s.size() - 1) * 9)) << endl;
}