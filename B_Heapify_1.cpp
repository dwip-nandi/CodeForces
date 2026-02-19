// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         vector<int> v(n + 1);

//         for (int i = 1; i <= n; i++)
//             cin >> v[i];

//         for (int i = 1; i <= (n / 2); i++) {
//             if (v[i] > v[i * 2])
//                 swap(v[i], v[i * 2]);
//         }

//         bool is = true;
//         for (int i = 1; i <= n / 2; i++) {
//             if (v[i] != i) {
//                 is = false;
//                 break;
//             }
//         }

//         if (is)
//             cout << "YES" << endl;
//         else
//             cout << "NO" << endl;
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// void solve() {
//     int n;
//     cin >> n;
//     vector<int> a(n + 1);
//     for (int i = 1; i <= n; i++) cin >> a[i];

//     vector<bool> visited(n + 1, false);

//     for (int i = 1; i <= n; i++) {
//         if (!visited[i]) {
//             vector<int> indices;
//             vector<int> values;

//             int curr = i;
//             while (curr <= n) {
//                 visited[curr] = true;
//                 indices.push_back(curr);
//                 values.push_back(a[curr]);
//                 if (curr > n / 2) break;
//                 curr *= 2;
//             }
//             sort(values.begin(), values.end());

//             for (int j = 0; j < indices.size(); j++) {
//                 if (values[j] != indices[j]) {
//                     cout << "NO" << endl;
//                     return;
//                 }
//             }
//         }
//     }

//     cout << "YES" << endl;
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t;
//     cin >> t;
//     while (t--) {
//         solve();
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> v[i];
    vector<bool> vis(n + 1, false);

    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
        {
            int c = i;
            vector<int> ind;
            vector<int> val;
            while (c <= n)
            {
                vis[c]=true;
                ind.push_back(c);
                val.push_back(v[c]);
                if(c>n/2)break;
                c*=2;
            }
            sort(val.begin(), val.end());

            for (int j = 0; j < ind.size(); j++)
            {
                if (ind[j] != val[j])
                {
                    cout << "NO" << endl;
                    return;
                }
            }
        }
    }
    cout<<"YES"<<endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}