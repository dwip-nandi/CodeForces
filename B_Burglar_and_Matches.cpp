#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> p(m);
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        p[i].first = a;
        p[i].second = b;
    }

    sort(p.rbegin(), p.rend(), [](const pair<int, int>& a, const pair<int, int>& b) {
        return a.second < b.second;
    });

    int sum = 0;
    for (int i = 0; i < m && n > 0; i++) {
        int take = min(n, p[i].first); 
        sum += take * p[i].second; 
        n -= take; 
    }

    cout << sum << endl;

    return 0;
}
