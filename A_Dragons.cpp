/*#include <bits/stdc++.h>
using namespace std;

int main() {
    int s, n;
    cin >> s >> n;
    vector<pair<int, int>> dragons(n);
    for (int i = 0; i < n; i++) {
        cin >> dragons[i].first >> dragons[i].second;
    }
    sort(dragons.begin(), dragons.end());

    for (int i = 0; i < n; i++) {
        if (s > dragons[i].first) {
            s += dragons[i].second;
        } else {
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;
    return 0;
}*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int s, n;
    cin >> s >> n;
    vector<int> strengths(n);
    vector<int> bonuses(n);

    for (int i = 0; i < n; i++) {
        cin >> strengths[i] >> bonuses[i];
    }
    vector<int> indices(n);
    iota(indices.begin(), indices.end(), 0);
    sort(indices.begin(), indices.end(), [&](int i, int j) {
        return strengths[i] < strengths[j];
    });

    for (int i = 0; i < n; i++) {
        int idx = indices[i];
        if (s > strengths[idx]) {
            s += bonuses[idx];
        } else {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}

