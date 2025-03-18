/*#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,n,s;
        cin>>a>>b>>n>>s;
        int ans =0;
        while((s)>=ans && a>0){
            ans += n;
            a--;
        }
        if(ans>s)
           ans -=n;

        //cout<<ans<<endl;

        if((ans+b)>=s)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}*/

// optimize code
#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, n, s;
        cin >> a >> b >> n >> s;
        int x = s / n;
        int y = s % n;
        if (x <= a && y <= b)
            cout << "YES" << endl;
        else if(x<=a && y>b)cout<<"NO"<<endl;
        else
        {
            if (x > a)
            {
                int p = x - a;
                if (((p * n) + y) <= b)
                    cout << "YES" << endl;
                else
                    cout << "NO" << endl;
            }
        }
    }
}