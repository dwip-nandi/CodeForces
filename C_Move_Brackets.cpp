#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, b = 0, c = 0;
        cin >> n;
        string s;
        cin >> s;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '(')
                b++;
            else
                b--;

            if (b < 0)
            {
                c++;
                b = 0;
            }
        }
        cout << c << endl;
    }
}