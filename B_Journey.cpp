#include <bits/stdc++.h>
using namespace std;
void solve() {
    int t;
    cin >> t;
    
    vector<int> v(t);
    for (int i = 0; i < t; i++) {
        long long n, a, b, c;
        cin >> n >> a >> b >> c;
        
        long long cs = a + b + c;  
        long long fc = n / cs;  
        long long dc = fc * cs; 
        long long rd = n - dc; 
        
        if (rd <= 0) {
            v[i] = fc * 3; 
        } else {
            long long days = fc * 3; 
            if (rd > 0) {
                rd -= a; 
                days++;
            }
            if (rd > 0) {
                rd -= b;
                days++;
            }
            if (rd > 0) {
                rd -= c; 
                days++;
            }
            v[i] = days;
        }
    }
    for (int i = 0; i < t; i++) {
        cout << v[i] << endl;
    }
}

int main() {
    solve();
    return 0;
}
