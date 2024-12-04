/*#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, k;
    cin >> n >> k;
    long long d = (n / 2);
    //cout << d << endl;
    if (n % 2 == 0)
    {
        if (k > d)
        {
            cout << ((k - d)) * 2<<endl;
        }else{
            cout<<((2*k)+1)-2<<endl;
        }
    }else{
        if (k > d+1)
        {
            cout << ((k - d-1)) * 2<<endl;
        }else{
            cout<<((2*k)+1)-2<<endl;
        }
    }
}*/
//optimized
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int n, k;
    cin >> n >> k;
    long long d = (n + 1) / 2; 

    if (k <= d) {
        cout << 2 * k - 1 << endl;
    } else {
        cout << 2 * (k - d) << endl;
    }

    return 0;
}
