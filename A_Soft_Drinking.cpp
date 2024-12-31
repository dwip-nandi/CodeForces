#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int x = min(min((k * l) / nl, c * d ),(p / np));
    cout << (x / n) << endl;
    return 0;
}