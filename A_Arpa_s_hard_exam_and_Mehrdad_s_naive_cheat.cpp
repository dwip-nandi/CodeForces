#include <bits/stdc++.h>
using namespace std;

long long isBinaryExponentialMode(int base, int power, long long mod) {
    long long result = 1;
    while (power>0) {
        if (power % 2 == 1) {
            result = (result * base) % mod;
            power--;
        } else {
            base = (base * base) % mod;
            power /= 2;
        }
    }
    return result;
}

int main() {
    int m;
    cin >> m;
    cout << isBinaryExponentialMode(8, m, 10) << endl;
    return 0;
}
