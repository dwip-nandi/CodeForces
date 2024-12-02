#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int count = 0, max = 0;
    while (n--)
    {
        int a, b;
        cin >> a >> b;
        count += b - a;
        if (count > max)
        {
            max = count;
        }
    }
    cout << max << endl;
}