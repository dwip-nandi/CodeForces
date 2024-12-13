#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        long long int a;
        cin >> a;
        bool isPtime = false;

        if (a == 4 || a == 9)
            isPtime = true;
        if (a % 2 != 0 && a >= 9)
        {
            long long x = sqrt(a);
            if ((x * x) == a)
            {
                if (x < 1000)
                {
                    for (int j = 3; j < x; j += 2)
                    {
                        if (a % j == 0)
                        {
                            isPtime = false;
                            break;
                        }
                        else
                            isPtime = true;
                    }
                }
                else
                {
                    for (int j = 3; j < 1000; j += 2)
                    {
                        if (a % j == 0)
                        {
                            isPtime = false;
                            break;
                        }
                        else
                            isPtime = true;
                    }
                }
            }
        }
        if (isPtime)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
}