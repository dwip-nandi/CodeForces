#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    long long os = 0, es = 0;
    int left = 0, right = n - 1;
    bool turn = true; 

    while (left <= right) {
        if (v[left] >= v[right]) {
            if (turn) {
                os += v[left];
            } else {
                es += v[left];
            }
            left++;
        } else {
            if (turn) {
                os += v[right];
            } else {
                es += v[right];
            }
            right--;
        }
        turn = !turn; 
    }

    cout << os << ' ' << es << endl;
    return 0;
}
