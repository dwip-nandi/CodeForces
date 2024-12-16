#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.size();

        for (int i = 0; i < 10; i++)
        {

            for (int j = 0; j < n - 1; j++)
            {
                if ((s[j] + 1) < s[j + 1])
                {
                    s[j + 1]--;
                    swap(s[j], s[j + 1]);
                }
            }
        }
        cout << s << endl;
    }
    return 0;
}
