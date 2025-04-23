/*#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,t;
    cin>>n>>t;
    long long x=1;
    for(int i=0;i<n-1;i++){
       x *=10;
    }
    cout<<x*t<<endl;
}*/

/*#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, t;
    cin >> n >> t;
    int x = 1;
    for (int i = 1; i < n; i++) {
        x *= 10;
    }

    if (x % t == 0) {
        cout << x << endl;
    } else {
        int m = (x / t) * t;
        if (m + t < x * 10) {
            cout << m + t << endl;
        } else {
            cout << -1 << endl;
        }
    }
    return 0;
}
*/

// optimize code

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, t;
    cin >> n >> t;
    string s;
    string ss = to_string(t);
    if(n<2 && t==10){
        cout<<-1<<endl;
        return 0;
    }
    if (t == 10)
    {
        s += ss;
        for (int i = 0; i < n - 2; i++)
        {
            s += '0';
        }
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            s += ss;
        }
    }
    cout<<s<<endl;
}