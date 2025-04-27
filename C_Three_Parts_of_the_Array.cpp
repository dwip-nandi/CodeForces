#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int l = 0, r = n - 1;
    int lsum = 0, rsum = 0;
    int msum = 0;
    lsum += v[l];
    rsum += v[r];
    while (l<r)
    {
        if (lsum == rsum)
        {
            msum = lsum;
            //cout<<msum<<endl;
            l++;
            lsum += v[l];
        }
        else if (lsum > rsum)
        {
            r--;
            rsum += v[r];
        }
        else
        {
            l++;
            lsum += v[l];
        }
    }
    cout<<msum<<endl;
}