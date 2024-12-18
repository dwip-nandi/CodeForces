#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n % 4 == 0)
        {
            cout << "YES" << endl;
            for (int i = 2; i <= n; i += 2)
            {
                cout << i << ' ';
            }
            for (int i = 1; i < n - 2; i += 2)
            {
                cout << i << ' ';
            }
            int d = n/2;
            cout<< (d*(d+1))-((d-1)*(d-1))<<endl;
        }else cout<<"NO"<<endl;
    }
}