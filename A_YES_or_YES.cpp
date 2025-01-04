#include <bits/stdc++.h>
using namespace std;
string to_upper(const string &s)
{
    string result = s;
    transform(result.begin(), result.end(), result.begin(), ::toupper);
    return result;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        string se = to_upper(s);
        if (se == "YES")
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}