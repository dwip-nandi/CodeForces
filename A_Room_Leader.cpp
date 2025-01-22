#include <bits/stdc++.h>
using namespace std;

struct Participant {
    string handle;
    int plus, minus, a, b, c, d, e;
    long long totalPoints;

    void calculatePoints() {
        totalPoints = plus * 100 - minus * 50 + a + b + c + d + e;
    }
};

int main() {
    int n;
    cin >> n;
    vector<Participant> participants(n);

    for (int i = 0; i < n; ++i) {
        cin >> participants[i].handle >> participants[i].plus >> participants[i].minus
            >> participants[i].a >> participants[i].b >> participants[i].c
            >> participants[i].d >> participants[i].e;
        participants[i].calculatePoints();
    }

    auto leader = max_element(participants.begin(), participants.end(), [](const Participant &a, const Participant &b) {
        return a.totalPoints < b.totalPoints;
    });

    cout << leader->handle << endl;

    return 0;
}
