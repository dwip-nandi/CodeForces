/*#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v={0, 1, 3, 6, 10, 15, 21, 28, 36, 45, 55, 66, 78, 91, 105, 120, 136, 153, 171, 190, 210, 231, 253, 276, 300, 325, 351, 378, 406, 435, 465, 496};
    bool isTriangular=false;
    for(int i=0;i<v.size();i++){
        if(n==v[i]){
            isTriangular=true;
            break;
        }
    }
    if(isTriangular)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    bool isTriangular=false;
    for(int i=1; ;i++){
        if((i*(i+1))==(2*t)){
            isTriangular=true;
            break;
        }
        if(i*(i+1)>(2*t)){
            isTriangular=false;
            break;
        }
    }
    if(isTriangular)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}