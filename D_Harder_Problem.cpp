#include <bits/stdc++.h>
#define MAX_N 200000
using namespace std;
int frequency[MAX_N + 1];

void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        map<int, int>mp;
        vector<int>v;
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
            if(mp[a[i]]==0){
                v.push_back(a[i]);
                mp[a[i]]++;
            }
        }
        for(auto u:v)cout<<u<<' ';

        for (int i = 1; i <= n; ++i)
        {
            if(mp[i]==0)cout<<i<<' ';
        }
        cout << endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
