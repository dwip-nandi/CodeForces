/*#include <bits/stdc++.h>
using namespace std;
#define int long long

bool isPrime(int n) {
    if (n < 2) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

signed main() {
    int t;
    cin >> t;
    while (t--) {
        int x, k;
        cin >> x >> k;
        string s = "";
        for (int i = 0; i < k; i++) {
            s += to_string(x);
        }
        int y = stoll(s);
        cout << (isPrime(y) ? "YES" : "NO") << endl;
    }
}
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long

bool isPrime(int n) {
    if (n < 2) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

bool isCheck(int x, int k) {
    string y = "";
    for (int i = 0; i < k; i++) {
        y += to_string(x);
    }
    
    if (y.size() <= 18) {  
        int fullNum = stoll(y); 
        return isPrime(fullNum);
    }

    return false;  
}

signed main() {
    int t;
    cin >> t;
    while (t--) {
        int x, k;
        cin >> x >> k;
        
        cout << (isCheck(x, k) ? "YES" : "NO") << endl;
    }
}
