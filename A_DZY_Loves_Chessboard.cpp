// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define fast_io                  \
//     ios::sync_with_stdio(false); \
//     cin.tie(nullptr);

// void query()
// {
//     int n, m;
//     cin >> n >> m;
//     char arr[n][m];
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cin >> arr[i][j];
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         bool a = true;
//         for (int j = 0; j < m; j++)
//         {
//             if (i == 0)
//             {
//                 if (arr[i][j] == '.' && a)
//                 {
//                     arr[i][j] = 'B';
//                     a = false;
//                 }
//                 else if (arr[i][j] == '.' && !a)
//                 {
//                     arr[i][j] = 'W';
//                     a = true;
//                 }
//             }
//             else
//             {
//                 bool b=true;
//                 if (arr[i][j] == '.' && arr[i - 1][j] == 'B')
//                 {
//                     arr[i][j] = 'W';
//                 }
//                 else if (arr[i][j] == '.' && arr[i - 1][j] == 'W')
//                 {
//                     arr[i][j] = 'B';
//                 }else if(arr[i][j] == '.' && b){
//                     arr[i][j] = 'B';
//                     b=false;
//                 }else if(arr[i][j] == '.' && !b){
//                     arr[i][j] = 'W';
//                     b=true;
//                 }
//             }
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cout << arr[i][j];
//         }
//         cout << endl;
//     }
//     cout << endl;
// }

// signed main()
// {
//     fast_io;
//     int t = 1;
//     // cin >> t;
//     while (t--)
//     {
//         query();
//     }
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fast_io                  \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

void query()
{
    int n, m;
    cin >> n >> m;
    char arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == '.')
            {
                if ((i + j) % 2 == 0)
                    arr[i][j] = 'B';
                else
                    arr[i][j] = 'W';
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j];
        }
        cout << endl;
    }
    cout << endl;
}

signed main()
{
    fast_io;
    int t = 1;
    // cin >> t;
    while (t--)
    {
        query();
    }
    return 0;
}
