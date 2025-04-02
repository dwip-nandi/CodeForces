#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;  
    while (t--) {
        int n;
        cin >> n;  
        int a[n];
        int odc = 0, evc = 0;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (i % 2 != a[i] % 2) { 
                if (i % 2 == 0) 
                    evc++;  
                else 
                    odc++;   
            }
        }
        if (odc != evc)
            cout << -1 << endl;
        else
            cout << odc << endl;
    }

    return 0;
}
