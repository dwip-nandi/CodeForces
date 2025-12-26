#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fast_io                  \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

void query()
{
    int n;
    cin >> n;
    int a = INT_MAX, b = a;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x < a)
        {
            b = a;
            a = x;
        }
        else if (x == a)
        {
            b = a;
        }
        else if(x>a && x<b){
            b=x;
        }
    }
    //cout << a << b << endl;
    if (b > (2 * a))
        cout << b - a << endl;
    else
        cout << a << endl;
}

signed main()
{
    fast_io;
    int t;
    cin >> t;
    while (t--)
    {
        query();
    }
    return 0;
}
