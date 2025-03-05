/*#include <bits/stdc++.h>
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

        bool isPosible = true;
        for (int i = 1; i < n; i++)
        {
            if (v[i] > v[i - 1])
            {
                if (v[i] != 1)
                {
                    if (v[i] % v[i - 1] == 0)
                    {
                        isPosible = false;
                        break;
                    }
                }
            }
        }
        if (isPosible)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}*/
#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

int lcm(int a, int b) {
    return (a / gcd(a, b)) * b;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> va(n);
        for (int i = 0; i < n; i++) cin >> va[i];

        vector<int> vb(n + 1);
        vb[0] = va[0];
        for (int i = 1; i < n; i++) {
            vb[i] = lcm(va[i - 1], va[i]);
        }
        vb[n] = va[n - 1];

        bool isPossible = true;
        for (int i = 1; i <= n; i++) {
            if (gcd(vb[i - 1], vb[i]) != va[i - 1]) {
                isPossible = false;
                break;
            }
        }

        if (isPossible)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
