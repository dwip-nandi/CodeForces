#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, t;
    cin >> n >> t;
    int nedTime = (240 - t);
    int c = 0;
    int solveTime = 5;
    for (int i = 1; i <= n; i++)
    {    
        if (solveTime <= nedTime)
        {
            c++;
            solveTime += (5 *(i+1) );
        }
    }
    cout << c << endl;
}