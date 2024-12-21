#include <bits/stdc++.h>
using namespace std;

bool isValidPermutation(string s, int n)
{

    int cp = 0, cs = 0, pi = -1, si = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'p')
        {
            cp++;
            if (pi == -1)
            {
                pi = i;
            }
        }
        if (s[i] == 's')
        {
            cs++;
            si = i;
        }
    }
    if (cs == 0 || cp == 0)
        return true;
    if (si == 0 || pi == (n - 1))
        return true;

    return false;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        if (isValidPermutation(s, n))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
