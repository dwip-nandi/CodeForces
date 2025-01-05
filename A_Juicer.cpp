/*#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n, b, d;
    cin >> n >> b >> d;
    ll a[n];
    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] <= b)
        {
            sum += a[i];
        }
    }
    if (sum == 0)
    {
        cout << 0 << endl;
        return 0;
    }
    else if (sum < d)
        cout << 1 << endl;
    else if (sum > d)
        cout << sum / d << endl;
    else if (sum == d)
        cout << 0 << endl;
}*/

//optimised code
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n, b, d;
    cin >> n >> b >> d;
    ll a[n];
    ll sum = 0;
    ll ec = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] <= b)
        {
            sum += a[i];
            if (sum > d)
            {
                ec++;
                sum = 0;
            }
        }
    }
    cout << ec << endl;
    return 0;
}
