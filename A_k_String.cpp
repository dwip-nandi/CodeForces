#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k;
    string s;
    cin >> k >> s;

    map<char, int> mp;
    for (char c : s)
        mp[c]++;

    // for(auto ch :mp){
    //     cout<<ch.first<<ch.second<<endl;
    // // }

    string r = "";
    for (auto ch : mp)
    {
        if (ch.second % k != 0)
        {
            cout << "-1" << endl;
            return 0;
        }
        else
        {
            r += string(ch.second / k, ch.first);
        }
    }

    string result = "";
    for (int i = 0; i < k; i++)
        result += r;

    cout << result << endl;
}
