/*#include <bits/stdc++.h>
using namespace std;

bool check(int x, vector<int>& p) {
    int count = 0;
    do {
        int result = x;
        for (int i = 0; i < 4; i++) {
            result %= p[i];
        }
        if (result == x) {
            count++;
        }
    } while (next_permutation(p.begin(), p.end()));
    return count >= 7;
}

int main() {
    int p1, p2, p3, p4, a, b;
    cin >> p1 >> p2 >> p3 >> p4 >> a >> b;
    vector<int> p = {p1, p2, p3, p4};
    int count = 0;
    for (int x = a; x <= b; x++) {
        if (check(x, p)) {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
*/
//update code
#include <bits/stdc++.h>
using namespace std;

int main() {
    int p1, p2, p3, p4, a, b;
    cin >> p1 >> p2 >> p3 >> p4 >> a >> b;
    
    int p = min({p1, p2, p3, p4});
    int count = 0;
    
    // Пересечение интервалов [0; p-1] и [a; b]
    int start = max(a, 0);
    int end = min(b, p - 1);
    
    if (start <= end) {
        count = end - start + 1;
    }
    
    cout << count << endl;
    return 0;
}
