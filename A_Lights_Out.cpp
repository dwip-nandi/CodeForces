#include <bits/stdc++.h>
using namespace std;
int main()
{
    int v[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            cin >> v[i][j];
    }
    int result[3][3];

    if ((v[0][1] + v[1][0] + v[0][0]) % 2 == 0)
        result[0][0] = 1;
    else
        result[0][0] = 0;
    if ((v[0][0] + v[0][1] + v[0][2] + v[1][1]) % 2 == 0)
        result[0][1] = 1;
    else
        result[0][1] = 0;
    if ((v[0][1] + v[0][2] + v[1][2]) % 2 == 0)
        result[0][2] = 1;
    else
        result[0][2] = 0;
    if ((v[0][0] + v[1][0] + v[2][0] + v[1][1]) % 2 == 0)
        result[1][0] = 1;
    else
        result[1][0] = 0;
    if ((v[1][0] + v[1][1] + v[1][2] + v[0][1] + v[2][1]) % 2 == 0)
        result[1][1] = 1;
    else
        result[1][1] = 0;
    if ((v[0][2] + v[1][1] + v[1][2] + v[2][2]) % 2 == 0)
        result[1][2] = 1;
    else
        result[1][2] = 0;
    if ((v[1][0] + v[2][0] + v[2][1]) % 2 == 0)
        result[2][0] = 1;
    else
        result[2][0] = 0;
    if ((v[1][1] + v[2][0] + v[2][1] + v[2][2]) % 2 == 0)
        result[2][1] = 1;
    else
        result[2][1] = 0;
    if ((v[1][2] + v[2][1] + v[2][2]) % 2 == 0)
        result[2][2] = 1;
    else
        result[2][2] = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            cout << result[i][j];
        cout << endl;
    }
}