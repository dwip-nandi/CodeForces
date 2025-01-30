#include <bits/stdc++.h>
using namespace std;

int xyz(int n) {
    vector<int> pf(n + 1, 0);
    for (int i = 2; i <= n; ++i) {
        if (pf[i] == 0) { 
            for (int j = i; j <= n; j += i) {
                pf[j]++;
            }
        }
    }
    int c = 0;
    for (int i = 2; i <= n; ++i) {
        if (pf[i] == 2) {
            c++;
        }
    }

    return c;
}

int main() {
    int n;
    cin >> n;
    cout << xyz(n) << endl;
    return 0;
}
