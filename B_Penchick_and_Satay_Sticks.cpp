
#include <bits/stdc++.h>
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

        bool isSorted = true;
        for (int j = 0; j < n; j++)
        {
            if (v[j] != j + 1 && v[j] != j + 2 && v[j] != j)
            {
                isSorted = false;
                break;
            }
        }

        if (isSorted)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}

/*#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++)cin>>v[i];

        bool isSorted = true;
        for(int j=0;j<n-2;j++){
            if((v[j]-v[j+1])>=2 ||(v[j] - v[j + 1])==1 && (v[j+1]-v[j+2])==1){
                isSorted = false;
                break;
            }
        }

        if(isSorted)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
*/

/*#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++) cin >> v[i];

        bool isSorted = true;
        for(int j = 0; j < n - 1; j++){
            if((v[j] - v[j + 1]) != 1){
                isSorted = false;
                break;
            }
        }

        if(isSorted) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
*/