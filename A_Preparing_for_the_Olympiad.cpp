#include <bits/stdc++.h>
using namespace std;

void codeN()
{
    int n;
    cin >> n;
    int va[n], vb[n + 1] = {0};

    for (int i = 0; i < n; ++i)
    {
        cin >> va[i];
    }

    int k, c = 0;
    cin >> k;

    for (int i = 0; i < n - 1; ++i)
    {
        cin >> k;
        if (va[i] > k)
        {
            c += va[i] - k;
        }
    }
    c += va[n - 1];

    cout << c << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        codeN();
    }
    return 0;
}
