#include <bits/stdc++.h>
using namespace std;

bool intersect(int a, int b, int c, int d) {
    if (a > b) swap(a, b);
    if (c > d) swap(c, d);
    return (a < c && c < b && (b < d || d < a)) || (c < a && a < d && (d < b || b < c));
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if (intersect(a, b, c, d)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
