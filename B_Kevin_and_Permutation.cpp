#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            arr[i] = -1;
        }
        int c = 1;
        for (int i = (k - 1); i <= n; i += k)
        {
            arr[i] = c;
            c++;
        }
        int p = n;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] == -1)
            {
                arr[j] = p;
                p--;
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << ' ';
        }
        cout << endl;
    }
    return 0;
}
