
//my code----
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,result=0;
    cin>>n;
    if(n>=0) result = n;
    else{
        int p =abs(n);
        int x =p%10;
        //cout<<x<<endl;
        int y =p/10;
       // cout<<y<<endl;
        int z =y%10;
       // cout<<z<<endl;
        int k =y/10;
        //cout<<k<<endl;
        int r =(k)*10+x;
        //cout<<r<<endl;
        if(z<=x) result = -y;
        else result = - r;
    }
    cout<<result<<endl;
}

// optimize code

/*#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, result = 0;
    cin >> n;
    if (n >= 0)
        result = n;
    else
    {
        int remLast = n / 10;
        // cout<<remLast<<endl;
        int r = n % 10;
        int rem2nd = (remLast / 10);
        // cout<<remLast<<endl;
        int rem2ndr = (rem2nd * 10) + r;
        // cout<<rem2ndr<<endl;

        result = max(remLast, rem2ndr);
    }
    cout << result << endl;
    return 0;
}
*/