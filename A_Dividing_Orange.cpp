//update code
#include<bits/stdc++.h>
using namespace std;
int arr[500],n,k;
bitset<1000>s;
int main(){
    cin>>n>>k;
    for(int i=1;i<=k;i++){
        cin>>arr[i];
        s[arr[i]]=1;
    }
    int l=1;
    for(int i=1;i<=k;i++){
        cout<<arr[i];
        int j=n-1;
        while(j--){
            while(s[l]){
                l++;
            }
            cout<<' '<<l++;
        }
        cout<<endl;
    }

}
/*#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector<int>v(k);
    for(int i=0;i<k;i++)cin>>v[i];
    int arr[n][k];
    for(int i=0;i<n;i++){
        arr[i][0]=v[i];
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=k;j++){
            if(v[j-1]!=i*j){
                arr[i][j]=i*j;
            }
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<k;j++){
            cout<<arr[i][j]<<' ';
        }cout<<endl;
    }
}*/
/*#include<bits/stdc++.h>
using namespace std;
bitset<1001>u;
int a[50],l=1,n,k;
int main(){
	cin>>n>>k;
	for(int i=1;i<=k;i++){
		cin>>a[i];
		u[a[i]]=1;
	}
	for(int i=1;i<=k;i++){
		cout<<a[i]<<" ";
		int j=n-1;
		while(j--){
			while(u[l]){
			    l++;
			}
			cout<<" "<<l++;
		}
		cout<<endl;
	}
	return 0;
}*/
/*#include<bits/stdc++.h>
using namespace std;
int arr[50],n,k;
bitset<1000>s;
int main(){
    cin>>n>>k;
    for(int i=1;i<=k;i++){
        cin>>arr[i];
        s[arr[i]]=1;
    }
    int l=1;
    for(int i=1;i<=k;i++){
        cout<<arr[i]<<' ';
        int j=n-1;
        while(j--){
            while(s[l]){
                l++;
            }
            cout<<' '<<l++;
        }cout<<endl;
    }

}
*/
