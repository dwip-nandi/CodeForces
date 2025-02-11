#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    string codeforces = "codeforces";
    
    while (t--) {
        char c;
        cin >> c;
        
        if (codeforces.find(c) != string::npos) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}
