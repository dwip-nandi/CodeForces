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
        int m = n * (n + 1) / 2, k = 0;
        vector<int> arr(n + 1);
        int x = 0, y = 0, p_i = 0, q_i = 0, c = 0;
        bool ch = true, chh = true;

        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
            m -= arr[i];
            if (arr[i] == 0 && ch)
            {
                p_i = i;
                ch = false;
            }
            if (arr[i] != i && arr[i] != 0 && chh)
            {
                q_i = i;
                chh = false;
            }
            if (arr[i] != i && arr[i] != 0)
            {
                x = i;
            }
            if (arr[i] == 0)
            {
                c++;
                y = i;
            }
        }
        if (n == 1 || (x == 0 && y == 0))
        {
            cout << 0 << endl;
            continue;
        }
        if (c == 1)
        {
            if (y == n )
                if(y==m){
                    if(x==0 && q_i==0)cout << 0 << endl;
                    else cout<<abs(x-q_i)+1<<endl;
                }else cout<<abs(q_i-max(x,y))+1<<endl;
            else
            {
                if (m == p_i )
                   if(x!=q_i) cout << abs(x - q_i)+1<< endl;
                   else cout<<0<<endl;
                else
                {
                    if (p_i == 0)
                        cout << abs(q_i - max(x, y)) + 1 << endl;
                    else if (q_i == 0)
                        cout << abs(p_i - max(x, y)) + 1 << endl;
                    else
                        cout << abs(min(p_i, q_i) - max(x, y)) + 1 << endl;
                }
            }
        }
        else
        {
            if (p_i == 0)
                cout << abs(q_i - max(x, y)) + 1 << endl;
            else if (q_i == 0)
                cout << abs(p_i - max(x, y)) + 1 << endl;
            else
                cout << abs(min(p_i, q_i) - max(x, y)) + 1 << endl;
        }
    }
}
