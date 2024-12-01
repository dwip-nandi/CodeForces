#include <bits/stdc++.h>
using namespace std;
int main()
{
    int mat[5][5], i = 0, j = 0, a = 0, b = 0;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            cin >> mat[i][j];
            if (mat[i][j] == 1)
            {
                a = i;
                b = j;
            }
        }
    }
    cout << abs(2 - a) + abs(2 - b) << endl;
    return 0;
}
