#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> uniforms(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> uniforms[i].first >> uniforms[i].second;
    }
    
    int count = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i != j && uniforms[i].first == uniforms[j].second) {
                count++;
            }
        }
    }
    
    cout << count << endl;
    return 0;
}
