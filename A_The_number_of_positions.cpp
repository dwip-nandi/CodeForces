/*#include <iostream>
using namespace std;

int main() {
    int n, a, b;
    cin >> n >> a >> b;
    int positions = n - a - b;
    cout << positions << endl;
    return 0;
}
*/
// optimize code 
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a, b;
    cin >> n >> a >> b;
    int positions = n - max(a + 1, n - b) + 1;
    cout << positions << endl;
    return 0;
}
