// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     vector<int>v(n);
//     for(int i=0;i<n;i++)
// }

// // bool can_sort_by_reversing_segment(int n, vector<int>& a) {
// //     int l = 0, r = n - 1;
// //     // Find the first and last indices where the array is not sorted
// //     while (l < n - 1 && a[l] < a[l + 1]) {
// //         l++;
// //     }
// //     while (r > 0 && a[r] > a[r - 1]) {
// //         r--;
// //     }
    
// //     // Reverse the segment and check if the array is sorted
// //     reverse(a.begin() + l, a.begin() + r + 1);
// //     if (is_sorted(a.begin(), a.end())) {
// //         cout << "yes" << endl;
// //         cout << l + 1 << " " << r + 1 << endl;
// //         return true;
// //     } else {
// //         cout << "no" << endl;
// //         return false;
// //     }
// // }

// // int main() {
// //     int n;
// //     cin >> n;
// //     vector<int> a(n);
// //     for (int i = 0; i < n; i++) {
// //         cin >> a[i];
// //     }

// //     can_sort_by_reversing_segment(n, a);

// //     return 0;
// // }


#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        b[i] = a[i];
    }

    sort(b.begin(), b.end());

    int l = 0, r = n - 1;
    while (l < n && a[l] == b[l]) l++;
    while (r >= 0 && a[r] == b[r]) r--;

    if (l >= r) {
        cout << "yes\n" << 1 << " " << 1 << "\n";
        return 0;
    }

    reverse(a.begin() + l, a.begin() + r + 1);

    if (a == b) {
        cout << "yes\n" << l + 1 << " " << r + 1 << "\n"; 
    } else {
        cout << "no\n";
    }

    return 0;
}
