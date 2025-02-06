#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;
        
        long long m = (n + k - 1) / k; 
        long long sum = m * k;
        long long maxElement = (sum + n - 1) / n; 
        
        cout << maxElement << endl;
    }
    return 0;
}
