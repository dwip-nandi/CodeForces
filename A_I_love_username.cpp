#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int count = 0;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int small = v[0], max = v[0];
    for (int i = 0; i < n; i++)
    {

        if (v[i] < small)
        {
            count++;
            small = v[i];
        }
        if (v[i] > max)
        {
            count++;
            max = v[i];
        }
    }
    cout << count << endl;
}