#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int a = 0;
        for (int i = 1; i < s.size(); i++)
        {
            if (s[i] == 'a')
            {
                a = i;
                break;
            }
        }
        if (a != 0 && a < s.size() - 1)
        {
            for (int i = 0; i < a; i++)
                cout << s[i];
            cout << " ";
            cout << s[a] << " ";
            for (int i = a + 1; i < s.size(); i++)
                cout << s[i];
            cout << endl;
        }
        else
        {

            cout << s[0];
            int i;
            for (i = 1; i < s.size(); i++)
            {
                if (s[i] == 'a')
                    cout << s[i];
                else
                    break;
            }
            cout << " ";
            for (int j = i; j < s.size() - 1; j++)
                cout << s[j];
            cout << " ";
            cout << s[s.size() - 1] << endl;
        }
    }
}