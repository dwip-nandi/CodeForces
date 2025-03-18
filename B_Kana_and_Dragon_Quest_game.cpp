#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, n, m;
        cin >> x >> n >> m;
        while(n>0 && x>20){
            x = (x/2) + 10;
            n--;
        }
        x -= 10*m;
        if (x<=0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}