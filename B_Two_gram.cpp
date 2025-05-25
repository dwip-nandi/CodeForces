#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s;
    cin >> n >> s;

    unordered_map<string, int> mp;
    string mx;
    int c = 0;

    for (int i = 0; i < n - 1; i++)
    {
        string tg = s.substr(i, 2);
        mp[tg]++;

        if (mp[tg] > c)
        {
            c = mp[tg];
            mx = tg;
        }
    }

    cout << mx << endl;
}
