#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    int c = 0;
    // for(int i=0;i<n;i++)cin>>v[i];
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] <= v[i - 1] && i > 0)
        {
            int d = v[i - 1] - v[i];
            if (d == 0)
            {
                c++;
                v[i] = v[i] + k;
                // cout <<'x' <<v[i] << endl;
            }
            else
            {
                // cout<<d<<endl;
                int s = (d / k) + 1;
                c += s;
                // cout<<s<<c<<endl;
                v[i] = v[i] + (s * k);
                // cout<<v[i]<<endl;
            }
        }
    }
    cout << c << endl;
}