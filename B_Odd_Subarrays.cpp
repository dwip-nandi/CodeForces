/*#include <iostream>
#include<vector>
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
        for (int i = 0; i < n; i++)
            cin >> v[i];

        int c = 0;
        
        for (int i = 1; i < n; i++)
        {
            if (v[i] < v[i - 1])
                c++;
                i++;
        }
        cout<<c<<endl;
    }
}*/
//update code
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; ++i) {
            cin >> v[i];
        }

        int c = 0;
        for (int i = 1; i < n; ++i) {
            if (v[i] < v[i - 1]) {
                ++c;
                ++i; 
            }
        }
        cout << c << endl;
    }
    return 0;
}
