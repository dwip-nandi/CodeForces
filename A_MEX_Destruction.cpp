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
        {
            cin >> v[i];
        }
        int cz = 0, ca = 0;
        for (int j = 0; j < n; j++)
        {
            if (v[j] == 0)
            cz++;
        }
        if (cz == n){
            cout << 0 << endl;
            continue ;
        }
        else if (cz == 0){
            cout << 1 << endl;
            continue ;
        }
        int cnt = 0;
        vector<int>vv;
        for (int i = 0; i < n; i++)
        {
            if (v[i] == 0)
            {
                if (cnt)
                {
                    vv.push_back(cnt);
                }
                cnt = 0;
            }
            else
            {
                cnt++;
            }
        }
        if (cnt)
        {
            vv.push_back(cnt);
        }
        if (vv.size() > 1)
        {
            cout << 2 << endl;
        }
        else
        {
            cout << 1 << endl;
        }
        
        // for(auto u:vv)cout<<u<<' ';
        // cout<<endl;
        // cout << cz << ca << endl;
    }
}