#include <bits/stdc++.h>
using namespace std;

int segments[] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};

int count_segments(int n) {
    int total_segments = 0;
    while (n > 0) {
        total_segments += segments[n % 10];
        n /= 10;
    }
    return total_segments;
}

int main() {
    int a, b;
    cin >> a >> b;
    int total_segments = 0;
    for (int i = a; i <= b; i++) {
        total_segments += count_segments(i);
    }
    cout << total_segments << endl;
    return 0;
}
