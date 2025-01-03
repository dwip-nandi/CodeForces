
#include <bits/stdc++.h>
using namespace std;

int main() {
  int tt;
  cin >> tt;
  while (tt--) {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
      cin >> v[i];
    }
    sort(v.begin(), v.end());
    int gcd = 0;
    for (int i = 1; i < n; i++) {
      if (v[i] % v[0] != 0) {
        gcd = __gcd(gcd, v[i]);
      }
    }
    bool beautiful = false;
    for (int i = 1; i < n; i++) {
      if (gcd % v[i] == 0) {
        beautiful = true;
        break;
      }
    }
    cout << (beautiful ? "YES" : "NO") <<endl;
  }
}
