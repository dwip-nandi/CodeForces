/*#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> b(n);
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    int mx = *max_element(b.begin(), b.end());
    int mn = *min_element(b.begin(), b.end());
    int mx_diff = mx - mn;

    long long count_max = count(b.begin(), b.end(), mx);
    long long count_min = count(b.begin(), b.end(), mn);

    long long x;
    if (mx == mn) {
        x = (n * (n - 1)) / 2; 
    } else {
        x = count_max * count_min;
    }

    cout << mx_diff << ' ' << x << endl;

    return 0;
}
*/
// update code
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> b(n);
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    int mx = *max_element(b.begin(), b.end());
    int mn = *min_element(b.begin(), b.end());
    int mx_diff = mx - mn;

    long long count_max = count(b.begin(), b.end(), mx);
    long long count_min = count(b.begin(), b.end(), mn);

    long long x;
    if (mx == mn) {
        x = (static_cast<long long>(n) * (n - 1)) / 2; 
    } else {
        x = count_max * count_min;
    }

    cout << mx_diff << ' ' << x << endl;

    return 0;
}
