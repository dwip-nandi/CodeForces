/*#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int n, k;
    cin >> n >> k;
    vector<int> va(n);
    vector<int> vc;
    vector<int> vb(k);
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> va[i];
        s += va[i];
        vc.push_back(s);
    }
    for (int i = 0; i < k; i++)
    {
        cin >> vb[i];
        int b = -1, r = 0;
        for (int j = 0; j < vc.size(); j++)
        {
            if (vc[j] >= vb[i])
            {
                b = j;
                if (b - 1 < 0)
                {
                    r = vb[i] - 0;
                }
                else
                    r = vb[i] - vc[b - 1];

                break;
            }
        }
        cout << b + 1 << ' ' << r << endl;
    }
}*/
#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    int n, k;
    cin >> n >> k;
    vector<int> va(n), vc(n), vb(k);
    int s = 0;

    for (int i = 0; i < n; i++) {
        cin >> va[i];
        s += va[i];
        vc[i] = s; 
    }

    for (int i = 0; i < k; i++) {
        cin >> vb[i];

        int b = lower_bound(vc.begin(), vc.end(), vb[i]) - vc.begin();

        int r = vb[i] - (b == 0 ? 0 : vc[b - 1]);

        cout << b + 1 << ' ' << r << endl;
    }
}
