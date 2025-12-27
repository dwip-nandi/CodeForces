// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define fast_io                  \
//     ios::sync_with_stdio(false); \
//     cin.tie(nullptr);

// void query()
// {
//     string s;
//     cin >> s;
//     bool is = true;
//     for (int i = 0; i <(s.size()-1); i++)
//     {
//         if (s[i] == 'Y' && s[i + 1] == 'Y')
//         {
//             is = false;
//             break;
//         }
//     }
//     if (is)
//         cout << "YES" << endl;
//     else
//         cout << "NO" << endl;
// }

// signed main()
// {
//     fast_io;
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         query();
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);

void query() {
    string s;
    cin >> s;
    int countY = count(s.begin(), s.end(), 'Y');
    if (countY <= 1)
        cout << "YES"<<endl;
    else
        cout << "NO"<<endl;
}

int main() {
    fast_io;
    int t;
    cin >> t;
    while (t--) {
        query();
    }
    return 0;
}
