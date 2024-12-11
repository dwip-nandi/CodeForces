#include <bits/stdc++.h>
using namespace std;
void codeN()
{
    int n, result = 0;
    ;
    cin >> n;
    if (n >= 2)
    {
        if (n % 2 == 0)
            result = (n / 2) - 1;
        else
            result = n / 2;
    }
    else
        result = 0;

    cout << result << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        codeN();
    }
}