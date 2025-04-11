#include <bits/stdc++.h>
using namespace std;
int main()
{
    int l, d;
    cin >> l >> d;
    if (d > 9 * l)
    {
        cout << "-1 -1" << endl;
        return 0;
    }
    if (d == 0)
    {
        if (l == 1)
        {
            cout << "0 0" << endl;
        }
        else
        {
            cout << "-1 -1" << endl;
        }
        return 0;
    }
    string s;
    for (int i = 0; i < l; i++)
    {
        int k = min(9, d);
        s.push_back(k + '0');
        d -= k;
    }
    string r = s;
    reverse(r.begin(), r.end());
    int j = 0;
    if (r[0] == '0')
    {
        while (r[j] == '0')
            j++;
        r[0]++;
        r[j]--;
    }

    cout << r << ' ' << s << endl;
}