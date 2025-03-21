#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, c = 0;
        cin >> n;
        string s1, s2;
        cin >> s1 >> s2;

        for (int i = 0; i < n; i++)
        {
            if (s1[i] == '1' && s2[i] == '1')
            {
                if (i + 1 < n && s1[i + 1] == '0' && s2[i + 1] == '0')
                {
                    c += 2;
                    i++; 
                }
            }
            else if (s1[i] == '0' && s2[i] == '0')
            {
                if (i + 1 < n && s1[i + 1] == '1' && s2[i + 1] == '1')
                {
                    c += 2;
                    i++;
                }
                else
                {
                    c++; 
                }
            }
            else
            {
                c += 2; 
            }
        }

        cout << c << endl;
    }

    return 0;
}
