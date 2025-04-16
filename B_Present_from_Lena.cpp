// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 0; i <= n; i++)
//     {

//         for (int b = 0; b < 2 * (n - i); b++)
//         {
//             cout << " ";
//         }
//         for (int j = 0; j <= i; j++)
//         {
//             cout << j << " ";
//         }
//         if (i > 0)
//         {
//             int q = n - i;
//             for (int k = n - q - 1; k >= 0; k--)
//             {
//                 cout << k << " ";
//                 q--;
//             }
//         }
//         cout << endl;
//     }

//     for (int i = 0; i < n; i++)
//     {
//         for (int b = 0; b < 2 * (i + 1); b++)
//         {
//             cout << " ";
//         }
//         for (int j = 0; j < n - i; j++)
//         {
//             cout << j << " ";
//         }

//         for (int k = n - i - 2; k >= 0; k--)
//         {
//             cout << k << " ";
//         }
//         cout << endl;
//     }
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i <= n; i++) {
        for (int b = 0; b < 2 * (n - i); b++) cout << " ";

        for (int j = 0; j <= i; j++) {
            cout << j;
            if (j != i) cout << " ";  
        }

        for (int j = i - 1; j >= 0; j--) {
            cout << " " << j;
        }

        cout << endl;
    }

    for (int i = n - 1; i >= 0; i--) {
        for (int b = 0; b < 2 * (n - i); b++) cout << " ";

        for (int j = 0; j <= i; j++) {
            cout << j;
            if (j != i) cout << " ";
        }

        for (int j = i - 1; j >= 0; j--) {
            cout << " " << j;
        }

        cout << endl;
    }

    return 0;
}
