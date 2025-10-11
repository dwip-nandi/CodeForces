#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, y;
        cin >> n >> x >> y;
        int p = n - 1;
        if ((x == 0 && y == 0) || (x > 0 && y > 0)){
            cout << -1 << endl;
            continue;
        }
        else
        {
            int w;
            if (x > 0)
                w = x;
            else
                w = y;
            
            if(w==1){
                for(int i=2;i<=n;i++)cout<<i<<' ';
                cout<<endl;
                continue;
            }

            if ((n - 1) % w != 0){
                cout << -1 << endl;
                continue;
            }
            else
            {
                for (int i = 0; i < w; i++)
                {
                    cout << 1 << ' ';
                    p--;
                }
                if (p >= w)
                {
                    for (int i = 0; i < w; i++)
                    {
                        cout << 2+w << ' ';
                        p--;
                    }
                }
                if (p >= w)
                {
                    for(int i=(2+2*w);i<n; i+= w )
                      for (int j = 0; j < w; j++)
                       {
                        cout << i << ' ';
                       }
                }
                cout<<endl;
            }
        }
    }
}