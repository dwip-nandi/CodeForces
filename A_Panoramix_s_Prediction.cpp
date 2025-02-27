#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> v;
    for (int i = n + 1; ; ++i) {
        if (isPrime(i)) {
            v.push_back(i);
            break;
        }
    }
    if (v[0] == m) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
