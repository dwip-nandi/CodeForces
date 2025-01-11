#include <bits/stdc++.h>
using namespace std;

// Function to sort the map by its second value
bool sortBySecond(const pair<int, int> &a, const pair<int, int> &b)
{
    return a.second < b.second;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        map<int, int> freq;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            freq[a[i]]++;
        }

        // Create a vector of pairs and copy the map elements into it
        vector<pair<int, int>> vec(freq.begin(), freq.end());

        // Sort the vector by the second value
        sort(vec.begin(), vec.end(), sortBySecond);

        int na = vec.size();
        if (n == k)
            cout << 1 << endl;
        else
        {
            for (auto &entry : vec)
            {
                if (entry.second <= k)
                {
                    na = na - 1;
                    k = k - entry.second;
                }
                // if (entry.second > maxFreq) {
                //     maxFreq = entry.second;
                // }
            }

            cout << na << endl;
        }
    }
    return 0;
}
