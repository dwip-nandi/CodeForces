/*#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin >> n;
    vector<ll> v1(n), v2(n);
    for (ll i = 0; i < n; i++)
        cin >> v1[i];
    v2 = v1;
    sort(v2.begin(), v2.end());
    ll m;
    cin >> m;

    while (m--)
    {
        ll t, l, r;
        cin >> t >> l >> r;
        ll sum1 = 0, sum2 = 0;
        if (t == 1)
        {
            for (ll i = l - 1; i < r; i++)
                sum1 += v1[i];
            cout << sum1 << endl;
        }
        else if (t == 2)
        {
            for (ll i = l - 1; i < r; i++)
                sum2 += v2[i];
            cout << sum2 << endl;
        }
    }
    return 0;
}
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll n;
    cin >> n;
    vector<ll> v1(n), v2(n);
    for (ll i = 0; i < n; i++)
        cin >> v1[i];
    v2 = v1;
    sort(v2.begin(), v2.end());
    vector<ll> sum1(n + 1, 0), sum2(n + 1, 0);
    for (ll i = 0; i < n; i++) {
        sum1[i + 1] = sum1[i] + v1[i];
        sum2[i + 1] = sum2[i] + v2[i];
    }

    ll m;
    cin >> m;
    while (m--) {
        ll t, l, r;
        cin >> t >> l >> r;
        if (t == 1) {
            cout << sum1[r] - sum1[l - 1] << endl;
        } else if (t == 2) {
            cout << sum2[r] - sum2[l - 1] << endl;
        }
    }
    return 0;
}
