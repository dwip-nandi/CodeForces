#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        char arr[n + 2][m + 2];
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= m; j++)
                cin >> arr[i][j];

        int total = 0, x1 = 1, x2 = n, y1 = 1, y2 = m;
        while (x1 < x2 && y1 < y2)
        {
            vector<char> v;
            for (int j = y1; j <= y2; j++)
                v.push_back(arr[x1][j]);
            x1++;
            for (int i = x1; i <= x2; i++)
                v.push_back(arr[i][y2]);
            y2--;
            for (int j = y2; j >= y1; j--)
                v.push_back(arr[x2][j]);
            x2--;
            for (int i = x2; i >= x1; i--)
                v.push_back(arr[i][y1]);
            y1++;

            if (v.size() > 3)
            {
                v.push_back(v[0]);
                v.push_back(v[1]);
                v.push_back(v[2]);
                int c = 0;
                for (int i = 0; i < v.size() - 3;)
                {
                    if (v[i] == '1' && v[i + 1] == '5' && v[i + 2] == '4' && v[i + 3] == '3')
                    {
                        c++;
                        i += 4;
                    }
                    else
                        i++;
                }
                total += c;
            }
        }
        cout << total << endl;
    }
}