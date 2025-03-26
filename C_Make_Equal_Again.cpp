// #include <iostream>
// #include <vector>
// #include <unordered_map>
// #include <algorithm>

// using namespace std;

// int minCostToEqualize(vector<int>& arr) {
//     int n = arr.size();
//     unordered_map<int, int> freq;
//     for (int num : arr) {
//         freq[num]++;
//     }

//     int maxFreq = 0;
//     for (const auto& pair : freq) {
//         maxFreq = max(maxFreq, pair.second);
//     }

//     return n - maxFreq;
// }

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         vector<int> arr(n);
//         for (int i = 0; i < n; ++i) {
//             cin >> arr[i];
//         }
//         cout << minCostToEqualize(arr) << endl;
//     }
//     return 0;
// }

// up solve
#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];

        if (n == 1) {
            cout << 0 << endl;
            continue;
        }

        int ind1 = -1, ind2 = -1;
        for (int i = 0; i < n - 1; i++) {
            if (v[i] != v[i + 1]) {
                ind1 = i + 1;
                break;
            }
        }
        for (int i = n - 1; i > 0; i--) {
            if (v[i] != v[i - 1]) {
                ind2 = i;
                break;
            }
        }

        if (ind1 == -1 || ind2 == -1) {
            cout << 0 << endl; 
            continue;
        }

        if (v[0] == v[n - 1]) {
            cout << max(0LL, (ind2 - ind1 )) << endl;
        } else {
            cout << n - max((n - ind2), ind1) << endl;
        }
    }
}
