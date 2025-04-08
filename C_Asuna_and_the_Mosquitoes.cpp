/*#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,mo=0,me=0;
        cin >> n;
        vector<int> v(n), vo, ve;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] % 2 == 0){
                ve.push_back(v[i]);
                if(v[i]>me)me=v[i];
            }
            else{
                vo.push_back(v[i]);
                if(v[i]>mo)mo=v[i];
            }
        }
        if (vo.size() < 1)
            cout << me << endl;
        if (ve.size() < 1)
            cout << mo << endl;
        else
        {
            int sum = 0;
            for (int i = 0; i < ve.size(); i++)
            {
                sum += ve[i];
            }
            for (int i = 0; i < vo.size(); i++)
            {
                sum += vo[i];
                sum--;
            }
            cout << sum+1 << endl;
        }
    }
}*/
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
        vector<int> v(n);
        int me = 0, mo = 0, c = 0;
        long long sum = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            sum += v[i];
            if (v[i] % 2 == 0)
            {
                me = max(me, v[i]);
            }
            else
            {
                c++;
                mo = max(mo, v[i]);
            }
        }
        if (mo == 0)
        {
            cout << me << endl;
        }
        else if (me == 0)
        {
            cout << mo << endl;
        }
        else
        {
            cout << sum - c + 1 << endl;
        }
    }
    return 0;
}
