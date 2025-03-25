/*#include <bits/stdc++.h>
using namespace std;

vector<int> generatePermutation(int n) {
    vector<int> permutation;
    if (n == 1) {
        permutation.push_back(1);
    } else {
        for (int i = n; i > 0; i -= 2) {
            permutation.push_back(i);
        }
        for (int i = n - 1; i > 0; i -= 2) {
            permutation.push_back(i);
        }
    }
    return permutation;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> permutation = generatePermutation(n);
        for (int num : permutation) {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n == 1)
        {
            cout << 1 << endl;
            continue;
        }
        if (n == 2)
        {
            cout << 1 << ' ' << 2 << endl;
            continue;
        }
        cout << 2 << ' ';
        int x = n / 2;
        int s = 4;
        for (int i = 1; i < x; i++)
        {
            cout << s << ' ';
            s++;
        }
        cout << 1 << ' ';
        if (n % 2 == 1)
            x++;
        for (int i = 1; i < x - 1; i++)
        {
            cout << s << ' ';
            s++;
        }
        cout << 3 << endl;
    }
}