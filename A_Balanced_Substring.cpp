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
        string s;
        cin >> s;
        bool isFound = false;
        for (int i = 0; i < n - 1; i++)
        {
            if ((s[i] == 'a' && s[i + 1] == 'b') || (s[i] == 'b' && s[i + 1] == 'a'))
            {
                cout << i + 1 << ' ' << i + 2 << endl;
                isFound = true;
                break;
            }
            else
            {
                isFound = false;
            }
        }
        if (!isFound)
            cout << -1 << ' ' << -1 << endl;
    }
}