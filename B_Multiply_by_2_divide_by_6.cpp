#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        long long n;
        cin >> n;
        int c = 0;
        bool isPosible = true;
        while (n > 1)
        {
            if (n % 6 == 0)
            {
                n /= 6;
                c++;
            }
            else if (n % 3 == 0)
            {
                n *= 2;
                c++;
            }
            else
            {
                isPosible = false;
                break;
            }
        }
        if (isPosible)
            cout << c << endl;
        else
            cout << -1 << endl;
    }
}