#include <bits/stdc++.h>
using namespace std;

int main() {
    string scales, remaining;
    cin >> scales >> remaining;

    int delimiter = scales.find('|');
    string left = scales.substr(0, delimiter);
    string right = scales.substr(delimiter + 1);

    int total_length = left.length() + right.length() + remaining.length();
    if (total_length % 2 != 0 || abs((int)left.length() - (int)right.length()) > remaining.length()) {
        cout << "Impossible" << endl;
        return 0;
    }
    while (left.length() < right.length() && !remaining.empty()) {
        left += remaining[0];
        remaining.erase(remaining.begin());
    }
    while (right.length() < left.length() && !remaining.empty()) {
        right += remaining[0];
        remaining.erase(remaining.begin());
    }

    int half_remaining = remaining.length() / 2;
    left += remaining.substr(0, half_remaining);
    right += remaining.substr(half_remaining);

    cout << left << "|" << right << endl;
    return 0;
}
