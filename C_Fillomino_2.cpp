#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n][n];
    memset(arr,0,sizeof(arr));
    int x;
    for(int i=0;i<n;i++){
        cin>>x;

        int a=i,b=i,y=x;
        while(x--){
            arr[a][b]=y;
            if(b!=0 && arr[a][b-1]==0)b--;
            else a++;
        }

    }
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++)
            cout<<arr[i][j]<<' ';
        cout<<endl;
    }
}