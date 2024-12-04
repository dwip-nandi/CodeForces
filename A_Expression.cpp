#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int maximum = max({a + b + c, a * b * c, (a + b) * c, a * (b + c)});
    cout << maximum << endl;

    return 0;
}
