/*#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    int q;
    cin >> q;
    vector<int> vm(q);
    for (int j = 0; j < q; j++)
        cin >> vm[j];
    for (int i = 0; i < q; i++)
    {
        int c = 0;
        for (int k = 0; k < n; k++)
        {
            if (v[k] <= vm[i])
            {
                c++;
            }
            else
                break;
        }
        cout << c << endl;
    }
}
*/

//Update code

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());

    int q;
    cin >> q;
    vector<int> vm(q);
    for (int j = 0; j < q; j++) {
        cin >> vm[j];
    }

    for (int i = 0; i < q; i++) {
        int count = upper_bound(v.begin(), v.end(), vm[i]) - v.begin();
        cout << count << endl;
    }

    return 0;
}
