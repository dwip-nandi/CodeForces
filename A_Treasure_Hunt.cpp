/*#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, a;
        cin >> x >> y >> a;
        int p = 0, i = 1;
        while (a >= p)
        {
            if (i % 2 == 1)
            {
                p += x;
                if (p > a)
                    cout << "NO" << endl;
            }
            else
            {
                p += y;
                if (p > a)
                    cout << "YES" << endl;
            }
            i++;
        }
    }
}*/
//optimize code
#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int t;
    cin >> t;
    while (t--) {
        int x, y, a;
        cin >> x >> y >> a;
        if(a%(x+y)<x)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;

    }
    return 0;
}
