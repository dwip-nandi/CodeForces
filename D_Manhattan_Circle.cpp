#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        vector<vector<char>> s(a, vector<char>(b));
        int mx = 0, indexi = 0;
        for (int i = 0; i < a; i++)
        {
            int count = 0;
            for (int j = 0; j < b; j++)
            {
                cin >> s[i][j];
                if (s[i][j] == '#')
                {
                    count++;
                    if (count > mx)
                    {
                        mx = count;
                        indexi = i;
                    }
                }
            }
        }
        int indexj = 0;
        for (int j = 0; j < b; j++)
        {
            if (s[indexi][j] == '#')
            {
                indexj = j;
                break;
            }
        }
        cout << indexi + 1 << ' ' << indexj + ((mx + 1) / 2)  << endl;
    }
}