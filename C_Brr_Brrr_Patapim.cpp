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
        vector<int> v;
        for (int i = 0; i < (n * n); i++)
        {
            int x;
            cin >> x;
            if (find(v.begin(), v.end(), x) == v.end())
                v.push_back(x);
        }
        
        int sum = accumulate(v.begin(), v.end(), 0);
        
        cout << (((2 * n) * ((2 * n) + 1)) / 2) - sum;
        for (auto it : v) cout << ' ' << it;
        cout << endl;
    }
}
