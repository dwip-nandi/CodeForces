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
        if (n == 2)
        {
            if (s[0] == 'A')
                cout << "Alice" << endl;
            else
                cout << "Bob" << endl;
            continue;
        }
        else if (s[0] == 'A' && s[n - 1] == 'A')
            cout << "Alice" << endl;
        else if (s[0] == 'B' && s[n - 1] == 'B')
            cout << "Bob" << endl;
        else
        {
            if (s[n - 1] == 'B')
            {
                int c = 0;
                for (int i = 0; i < n - 1; i++)
                    if (s[i] == 'B')
                    {
                        c++;
                        break;
                    }

                if (c > 0)
                    cout << "Bob" << endl;
                else
                    cout << "Alice" << endl;
            }
            else if (s[n - 1] == 'A' && s[n - 2] == 'A')
                cout << "Alice" << endl;
            else
                cout << "Bob" << endl;
        }
    }
}