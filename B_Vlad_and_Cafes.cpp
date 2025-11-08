#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        mp[v[i]] = i + 1;
    }

    auto it = min_element(mp.begin(), mp.end(), [](const auto &a, const auto &b)
    { return a.second < b.second; });
    int min = it->first;
    cout<<min<<endl;
}