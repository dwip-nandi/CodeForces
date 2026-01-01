// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         string s;
//         cin >> s;
//         int p = 0, q = 0;
//         for (int i = 0; i < s.size(); i++)
//         {
//             if (s[i] == '0')
//                 p++;
//             else
//                 q++;
//         }
//         int x=p,y=q;
//         if (s.size() == 1)
//             cout << 1 << endl;
//         else if (p == q)
//             cout << 0 << endl;
//         else
//         {
//             if (p < q)
//             {
//                 int i = 0,j=0;
//                 while (p > 0)
//                 {
//                     if (s[i] == '1'){
//                         p--;
//                     }else j++;

//                     i++;
//                 }
//                 if(j<x)
//                   cout << (s.size() - i)-(x-j) << endl;
//                 else
//                   cout << (s.size() - i)<< endl;

//             }
//             else
//             {
//                 int i = 0;
//                 while (q > 0)
//                 {
//                     if (s[i] == '0')
//                         q--;
//                     i++;
//                 }
//                 cout << s.size() - i << endl;
//             }
//         }
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// #define int long long
// signed main(){
//     int t;
//     cin>>t;
//     while(t--){
//         string s;
//         cin>>s;
//         int z=0,o=0;
//         for(x:s){
//             if(x=='0')z++;
//             else o++;
//         }
//         if(o==z){
//             cout<<0<<endl;
//             continue;
//         }
//         while()
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
    string s;
    cin >> s;
    int ze = 0, on = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '0')
            ze++;
        else
            on++;
    }
    int ans = -1;
    if (ze == on)
        ans = 0;
    else if (ze == 0 || on == 0)
        ans = max(ze, on);
    else
    {
        if (ze < on)
        {
            int c = 0, i =0;
            while (i!=(ze+1))
            {
                if (s[c] == '1')
                {
                    i++;
                    if(i==(ze+1))break;
                }
                c++;
            }
            ans = s.size() - c;
        }
        else
        {
            int c = 0, i =0;
            while (i!=(on+1))
            {
                if (s[c] == '0')
                {
                    i++;
                    if(i==(on+1))break;
                }
                c++;
            }
            ans = s.size() - c;
        }
    }

    cout << ans << endl;
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
