#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        arr[i] = ceil((double)arr[i]/m);
    }
    int mxIndex=0;
    for(int i=1;i<n;i++){
       if(arr[i]>=arr[mxIndex])mxIndex = i;
    }
    cout<<mxIndex+1<<endl;

}