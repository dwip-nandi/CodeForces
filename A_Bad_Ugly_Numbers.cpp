#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        if (n == 1) {
            cout << "-1"<<endl;
        } else {
            cout << "2"<< string(n - 1, '3') <<endl;
        }
    }
    return 0;
}
