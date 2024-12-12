/*#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n], even = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        if (a[i] % 2 == 0)
            even++;
    }
    //cout<<even<<endl;
    if (even == 1)
    {
        for (int i = 1; i <= n; i++)
        {
            if (a[i] % 2 == 0)
                cout << i << endl;
        }
    }
    else
    {
        {
            for (int i = 1; i <= n; i++)
            {
                if (a[i] % 2 == 1)
                    cout << i << endl;
            }
        }
    }
}*/
//optimize code
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    int odd=0,even=0,even_index=0,odd_index=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(v[i]%2==0){
            even++;
            even_index = i+1;
        }
        else{
            odd++;
            odd_index=i+1;
        }
    }
    if(even==1)cout<<even_index<<endl;
    else cout<<odd_index<<endl;
    return 0;
    
}