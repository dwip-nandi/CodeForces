#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);

void query() {
    int n;
    if (!(cin >> n)) return;
    
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector<int> seq1 = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    vector<int> seq2 = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    vector<int> seq;
    for (int i = 0; i < 2; i++) {
        for (int x : seq1) seq.push_back(x);
    }
    for (int x : seq2) seq.push_back(x);
    for (int i = 0; i < 3; i++) {
        for (int x : seq1) seq.push_back(x);
    }
    bool found = false;
    int limit = seq.size() - n;
    
    for (int i = 0; i <= limit; i++) {
        bool match = true;
        for (int j = 0; j < n; j++) {
            if (seq[i + j] != a[j]) {
                match = false;
                break;
            }
        }
        if (match) {
            found = true;
            break;
        }
    }

    if (found) cout << "YES" << endl;
    else cout << "NO" << endl;
}

signed main() {
    fast_io;
    query();
    
    return 0;
}