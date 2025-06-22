#include <bits/stdc++.h>
using namespace std;

int main() {
    int Y, W;
    cin >> Y >> W;

    int m = max(Y, W);
    int f = 6 - m + 1;

    if (f == 6) cout << "1/1"<<endl;
    else if (f == 5) cout << "5/6"<<endl;
    else if (f == 4) cout << "2/3"<<endl;
    else if (f == 3) cout << "1/2"<<endl;
    else if (f == 2) cout << "1/3"<<endl;
    else if (f == 1) cout << "1/6"<<endl;
    else cout << "0/1"<<endl;

    return 0;
}
