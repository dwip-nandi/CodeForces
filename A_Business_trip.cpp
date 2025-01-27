/*#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    vector<int>v(12);
    int sum=0;
    for(int i=0;i<12;i++){
        cin>>v[i];
        sum += v[i];
    }
    if(sum<t)cout<<-1<<endl;
    //else if(t==0)cout<<0<<endl;
    else{
      int c=0;
      for(int i=0;i<11;i++){
        if(((v[i+1]-v[i])<t && (v[i+1]-v[i])>0))c++;   
      }
      cout<<c<<endl;
    }
    
}*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int k;
    cin >> k;
    vector<int> v(12);
    for (int i = 0; i < 12; ++i) {
        cin >> v[i];
    }
    sort(v.rbegin(), v.rend());

    int total_v = 0;
    int months = 0;

    for (int i = 0; i < 12; ++i) {
        if (total_v >= k) {
            break;
        }
        total_v += v[i];
        ++months;
    }

    if (total_v >= k) {
        cout << months << endl;
    } else {
        cout << -1 << endl;
    }

    return 0;
}
