#include <bits/stdc++.h>
using namespace std;
int prifixSum(vector<int> &x)
{
    int sum = 0;
    vector<int> vs;
    for (int i = 0; i < x.size(); i++)
    {
        sum += x[i];
        vs.push_back(sum);
    }
    return *max_element(vs.begin(), vs.end());
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a;
        cin >> a;
        vector<int> va(a);
        for (int i = 0; i < a; i++)
            cin >> va[i];
        int b;
        cin >> b;
        vector<int> vb(b);
        for (int i = 0; i < b; i++)
            cin >> vb[i];

        int sum=0;
        if (prifixSum(va) >= 0 && prifixSum(vb) >= 0)
        {
            sum = prifixSum(va) + prifixSum(vb);
        }
        else if (prifixSum(va) >= 0 && prifixSum(vb) <= 0)
        {
            sum = prifixSum(va);
        }
        else if (prifixSum(va) <= 0 && prifixSum(vb) >= 0)
        {
            sum = prifixSum(vb);
        }else sum =0;
        cout << sum << endl;
    }
}