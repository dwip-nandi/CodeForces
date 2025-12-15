// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int m, x;
//         cin >> m >> x;

//         if (m == 1) {
//             if (x == 1) cout << 3 << "\n";
//             else cout << 2 << "\n";
//             continue;
//         }
//         if(m==x){
//             cout<<m+2<<endl;
//             continue;
//         }

//         int xx = m - 1;
//         int c;
//         if (xx % 4 == 0) c = xx;
//         else if (xx % 4 == 1) c = 1;
//         else if (xx % 4 == 2) c = m;
//         else c = 0;

//         if (c == x) cout << m << "\n";
//         else cout << m + 1 << "\n";
//     }
// }


#include <bits/stdc++.h>
using namespace std;

int prefixXor(int n) {
    if (n % 4 == 0) return n;
    if (n % 4 == 1) return 1;
    if (n % 4 == 2) return n + 1;
    return 0;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        int c = prefixXor(a - 1);

        if (c == b) cout << a << "\n";
        else if ((c ^ b) != a) cout << a + 1 << "\n";
        else cout << a + 2 << "\n";
    }
}
