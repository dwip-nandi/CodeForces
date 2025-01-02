#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v = {1200, 1400, 1600, 1900, 2100, 2300, 2400, 2600, 3000};
    for (int i = 0; i < 9; i++) {
        if (v[i] > n) {
            cout << v[i] << endl;
            break;
        }
    }
    return 0;
}
