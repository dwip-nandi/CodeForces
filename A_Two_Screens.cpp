// #include <bits/stdc++.h>
// using namespace std;

// vector<int> create_lps(string s) {
//     vector<int> lps(s.size(), 0);
//     int ind = 0;
//     for (int i = 1; i < s.size(); ) {
//         if (s[ind] == s[i]) {
//             lps[i] = ind + 1;
//             ind++;
//             i++;
//         } else {
//             if (ind != 0) {
//                 ind = lps[ind - 1];
//             } else {
//                 lps[i] = 0;
//                 i++;
//             }
//         }
//     }
//     return lps;
// }

// void kmp(string s, string r) {
//     int c = 0;
//     vector<int> lps = create_lps(s);
//     int i = 0, j = 0;

//     while (i < r.size()) {
//         if (r[i] == s[j]) {
//             i++;
//             j++;
//         } else {
//             if (j != 0) {
//                 j = lps[j - 1];
//             } else {
//                 i++;
//             }
//         }

//         if (j == s.size()) {
//             c++;
//             j = lps[j - 1];
//         }
//     }

//     int x = s.size() + r.size();
//     cout << x - (c * (s.size() - 1)) << endl;
// }

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         string s, r;
//         cin >> s >> r;
//         kmp(s, r);
//     }
// }
#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fast_io                  \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

void query()
{
    string s1, s2;
    cin >> s1 >> s2;
    if (s1.size() > s2.size())
    {
        string s3 = s1;
        s1 = s2;
        s2 = s3;
    }
    // if (s2.find(s1) != string::npos)
    // {
    //     cout <<s1.size()+(s2.size()-s1.size())+1<< endl;
    // }
    int c = 0;
    for (int i = 0; i < s1.size(); i++)
    {
        if (s1[i] == s2[i])
            c++;
        else
            break;
    }
    if (c > 0)
    {
        cout << 1 + s1.size() + s2.size() - c << endl;
    }
    else
        cout << s1.size() + s2.size() << endl;
}

signed main()
{
    fast_io;
    int t;
    cin >> t;
    while (t--)
    {
        query();
    }
    return 0;
}