#include <iostream>
using namespace std;

int main() {
    int n, i;
    cin >> n;
    int friends[n];
    int gifts[n];
    for (i = 0; i < n; i++) {
        cin >> friends[i];
        gifts[friends[i] - 1] = i + 1;
    }
    for (i = 0; i < n; i++) {
        cout << gifts[i] << " ";
    }
    cout << endl;
    return 0;
}
