#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int countab = 0, countba = 0;
        size_t abPosition = s.find("ab");
        while (abPosition != string::npos)
        {
            countab++;
            abPosition = s.find("ab", abPosition + 1);
        }
        size_t baPosition = s.find("ba");
        while (baPosition != string::npos)
        {
            countba++;
            baPosition = s.find("ba", baPosition + 1);
        }
        // int abi = s.find("ab");
        // int bai = s.find("ba");
        if (s[0] == 'a')
        {
            if (countab > countba)
            {
                s[0] = 'b';
            }
        }
        else
        {
            if (countba > countab)
            {
                s[0] = 'a';
            }

            
        }cout << s << endl;
        
    }return 0;
}