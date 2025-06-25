#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, t25 = 0, t50 = 0;
    cin >> n;
    vector<int> v(n);

    for(int i = 0; i < n; i++) {
        cin >> v[i];

        if(v[i] == 25) {
            t25++;
        } 
        else if(v[i] == 50) {
            if(t25 == 0) {
                cout << "NO"<<endl;
                return 0;
            }
            t25--;
            t50++;
        } 
        else if(v[i] == 100) {
            if(t50 > 0 && t25 > 0) {
                t50--;
                t25--;
            } 
            else if(t25 >= 3) {
                t25 -= 3;
            } 
            else {
                cout << "NO"<<endl;
                return 0;
            }
        }
    }

    cout << "YES"<<endl;
    return 0;
}
