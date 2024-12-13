/*#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    // for(auto u:v)cout<<u<<' ';
    // cout<<endl;
    int minSum = INT_MAX, index = 0;
    for (int i = 0; i <= n - m; i++)
    {
        int sum = 0;
        for (int j = i; j < i + m; j++)
        {
            sum += v[j];
        }
        if (minSum > sum)
        {
            minSum = sum;
            index = i;
        }
         //cout<<minSum<<' ';
    }
    cout << index + 1 << endl;
}*/

//optimize code for time limit exit
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    int minSum = INT_MAX, sum = 0, index = 0;
    for (int i = 0; i < m; i++) {
        sum += v[i];
    }
    minSum = sum;
    for (int i = m; i < n; i++) {
        sum += v[i] - v[i - m];
        if (sum < minSum) {
            minSum = sum;
            index = i - m + 1;
        }
    }
    cout << index + 1 << endl; 
    return 0;
}
