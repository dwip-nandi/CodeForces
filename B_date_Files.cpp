#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;
        long long a = 1, b = 0;
        while (a < n && a < k) {
            a *= 2;
            b++;
        }
        if (a < n) {
            b += (n - a + k - 1) / k;
        }
        cout << b <<endl;
    }
}
