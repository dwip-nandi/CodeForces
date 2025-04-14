#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        int c = 0;
        for (int i = 0; i < n; i++)
        {
            if(v[i]<(i+1+c))continue;
            int x = v[i]-(i+1+c);
            c +=x;
        }
        cout << c << endl;
    }
}