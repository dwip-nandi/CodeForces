#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
       long long n;
       cin>>n;
       if(n<4 || n%2==1)cout<<-1<<endl;
       else{
        long long mn = (n%6==0)?(n/6):(n/6 +1);
        long long mx = n/4;
        cout<<mn<<' '<<mx<<endl;
       }
    }
    return 0;
}
