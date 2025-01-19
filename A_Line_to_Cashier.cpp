#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int time = INT_MAX;
    vector<int> cas(n);
    for (int i = 0; i < n; i++)
        cin >> cas[i];
    for (int i = 0; i < n; i++)
    {
        int c=0;
        for (int j = 0; j < cas[i]; j++)
        {
            int a;
            cin >> a;
            c += a;
        }
        int x = (c * 5) + (cas[i] * 15);
        if (time > x)
        {
            time = x;
        }
    }
    cout << time << endl;
}