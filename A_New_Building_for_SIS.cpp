#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, h, a, b, k;
    cin >> n >> h >> a >> b >> k;

    while (k--) {
        int ta, fa, tb, fb;
        cin >> ta >> fa >> tb >> fb;

        if (ta == tb) {
            cout << abs(fa - fb) << endl;
        } else {
            int time = 0;
            int fl;

            if (fa < a) {
                time += a - fa;
                fl = a;
            } else if (fa > b) {
                time += fa - b;
                fl = b;
            } else {
                fl = fa;
            }

            time += abs(ta - tb); 
            time += abs(fb - fl);

            cout << time << endl;
        }
    }

    return 0;
}
