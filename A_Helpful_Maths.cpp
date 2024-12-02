#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;
    int n = str.size();
    for (int i = 0; i < n; i += 2)
    {
        for (int j = i+2; j < n; j += 2)
        {
            if (str[i] > str[j])
            {
                char tamp = str[i];
                str[i] = str[j];
                str[j] = tamp;
            }
        }
    }
    cout << str << endl;
}