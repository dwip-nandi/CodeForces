#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int c = 0, h = 0;
    for (int i = 0; i < n; i++)
    {
        c += a[i];
        int j = 1;
        while (c >= j * j)
        {
            if (c == j * j)
                h++;
            j += 2;
        }
    }
    // cout << c << endl;

    cout << h << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
/*#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int total_pieces = 0;
    int layer_size = 1;
    int happy_days = 0;

    for (int i = 0; i < n; i++) {
        total_pieces += a[i];
        while (total_pieces >= layer_size * layer_size) {
            if (total_pieces == layer_size * layer_size) {
                happy_days++;
            }
            layer_size++;
        }
    }

    cout << happy_days << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
*/