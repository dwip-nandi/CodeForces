// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define fast_io                  \
//     ios::sync_with_stdio(false); \
//     cin.tie(nullptr);

// void query()
// {
//     int n;
//     cin >> n;
//     vector<int> v(n + 2), ps;
//     for (int i = 0; i < n + 2; i++)
//     {
//         cin >> v[i];
//     }
//     sort(v.begin(), v.end());
//     int sum = 0;
//     for (int i = 0; i < n + 1; i++)
//     {
//         sum += v[i];
//         ps.push_back(sum);
//     }
//     if (ps[n - 1] == v[n])
//     {
//         for (int i = 0; i < n; i++)
//         {
//             cout << v[i] << ' ';
//         }
//         cout << endl;
//         return;
//     }
//     bool is =false; 
//     int c=-1;
//     for(int i=0;i<n;i++){
//         if(ps[n]-v[n+1]==v[i]){
//             is=true;
//             c=i;
//             break;
//         }
//     }
//     if(is){
//         for(int i=0;i<n+1;i++){
//             if(c==i)continue;
//             else cout<<v[i]<<' ';
//         }cout<<endl;
//     }else cout<<-1<<endl;
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

#define int long long
#define fast_io                  \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

void query()
{
    int n;
    cin >> n;
    vector<int> v(n + 2);
    int ts = 0;

    for (int i = 0; i < n + 2; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());

    for (int i = 0; i < n + 1; i++) {
        ts += v[i];
    }

    if (ts - v[n] == v[n]) {
        for (int i = 0; i < n; i++) {
            cout << v[i] << " ";
        }
        cout << endl;
        return;
    }

    int c = -1;
    for (int i = 0; i < n + 1; i++) {
        if (ts - v[i] == v[n + 1]) {
            c = i;
            break;
        }
    }

    if (c != -1) {
        for (int i = 0; i < n + 1; i++) {
            if (i == c) continue;
            cout << v[i] << " ";
        }
        cout << endl;
    } else {
        cout << -1 << endl;
    }
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