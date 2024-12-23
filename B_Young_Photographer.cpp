#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    int L = 0, R = 1000; 
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        if (a > b) swap(a, b);
        L = max(L, a); 
        R = min(R, b); 
    }

    if (L <= R) {
        int min_distance = min(abs(x - L), abs(x - R));
        if (x >= L && x <= R) {
            min_distance = 0; // Bob is already present the segment
        }
        cout << min_distance << endl;
    } else {
        cout << -1 << endl;
    }

    return 0;
}
