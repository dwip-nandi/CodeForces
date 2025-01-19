/*#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        vector<int>v(4);
        for(int i=0;i<4;i++)cin>>v[i];
        if(v[i]!=)
    }
}*/
#include <bits/stdc++.h>
using namespace std;

int codN(int a1, int a2, int a4, int a5) {
    int maxFib = 0;
    for (int a3 = -100; a3 <= 100; a3++) {
        int fibCount = 0;
        if (a3 == a1 + a2) ++fibCount;
        if (a4 == a2 + a3) ++fibCount;
        if (a5 == a3 + a4) ++fibCount;
        maxFib = max(maxFib, fibCount);
    }
    return maxFib;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a1, a2, a4, a5;
        cin >> a1 >> a2 >> a4 >> a5;
        cout << codN(a1, a2, a4, a5) << endl;
    }
    return 0;
}

