// #include <bits/stdc++.h>
// using namespace std;
// #define int long long
// signed main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n, k;
//         cin >> n >> k;
//         string s;
//         cin >> s;
//         vector<char> v(n, '0');
//         if (n == 1)
//         {
//             cout << '-' << endl;
//             continue;
//         }
//         else
//         {
//             int x = 0, y = n - 1;
//             int d =( k+1)/2;
//             for (int i = 0; i <d; i++)
//             {
//                 int j = k - 1 - i;
//                 if (i == j)
//                 {
//                     if (s[i] == '0')
//                     {
//                         v[x++] = '-';
//                     }
//                     else if (s[i] == '1')
//                     {
//                         v[y--] = '-';
//                     }
//                     // else if (s[i] == '2')
//                     // {
//                     //     v[x++] = '?';
//                     //     v[y--] = '?';
//                     // }
//                 }
//                 else
//                 {
//                     if (s[i] == '0')
//                     {
//                         v[x++] = '-';
//                     }
//                     else if (s[i] == '1')
//                     {
//                         v[y--] = '-';
//                     }
//                     // else if (s[i] == '2')
//                     // {
//                     //     v[x++] = '?';
//                     //     v[y--] = '?';
//                     // }

//                     if (s[j] == '0')
//                     {
//                         v[x++] = '-';
//                     }
//                     else if (s[j] == '1')
//                     {
//                         v[y--] = '-';
//                     }
//                     // else if (s[j] == '2')
//                     // {
//                     //     v[x++] = '?';
//                     //     v[y--] = '?';
//                     // }
//                 }
//             }

//             for (int i = 0; i < n; i++)
//             {
//                 if (v[i] == '0')
//                     cout << '+';
//                 else
//                     cout << v[i];
//             }
//             cout << endl;
//         }
//     }
// }
#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n, m;
        cin >> n >> m;
        vector<char> v(n, '+');
        string s;
        cin >> s;

        int z = 0, o = 0, twos = 0;
        for (auto x : s) {
            if (x == '0') z++;
            else if (x == '1') o++;
            else twos++;
        }

        for (int i = 0; i < z; i++) v[i] = '-';

        for (int i = n - 1; i >= n - o; i--) v[i] = '-';

        if (n - (z + o) == twos && twos > 0) {
           for(int i=0;i<twos;i++) v[z+i] = '-';
        } else {
            for (int i = 0; i < twos; i++) {
                if (z + i < n - o) v[z + i] = '?';
                if (n - (o + i + 1) >= z) v[n - (o + i + 1)] = '?';
            }
        }

        for (char c : v) cout << c;
        cout << endl;
    }
}
