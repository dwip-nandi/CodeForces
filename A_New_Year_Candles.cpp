#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int result = a;
    int  d = 0;
    while (a >=b)
    {
        int newa = a / b;
        d = a % b;
        result += newa;
        a = newa + d;
    }
    cout << result  << endl;
}