#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    if (n % 2 == 1)
    {
        for (int i = n - 2; i >= 1; i -= 2)
        {
            cout << s[i];
        }
        for (int i = 0; i < n; i += 2)
        {
            cout << s[i];
        }
        cout << endl;
    }
    else
    {
        for (int i = n - 2; i >= 0; i -= 2)
        {
            cout << s[i];
        }
        for (int i = 1; i < n; i += 2)
        {
            cout << s[i];
        }
        cout << endl;
    }
}

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     string s;
//     cin >> n >> s;
//     string dc = "";
//     for (int i = 0; i < n; ++i) {
//         int pos;
//         if (dc.length() % 2 == 0) {
//             pos = dc.length() / 2;
//         } else {
//             pos = dc.length() / 2;
//         }
//         dc.insert(pos, 1, s[i]);
//     }

//     cout << dc << endl;
//     return 0;
// }
