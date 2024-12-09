#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> v(m);
    for (int i = 0; i < m; i++) {
        cin >> v[i];
    }

    long long int x = v[0] - 1; 

    for (int i = 0; i < m - 1; i++) {
        if (v[i] > v[i + 1]) {
            x += n - (v[i] - v[i + 1]);
        } else {
            x += v[i + 1] - v[i];
        }
    }

    cout << x << endl;
    return 0;
}
