/*#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ifstream input("input.txt");
    ofstream output("output.txt");
    int n,k;
    cin>>n>>k;
    int v[n];
    for(int i=1;i<=n;i++){
        cin>>v[i];

    }
    if(v[k]==1)cout<<k<<endl;
    else{
        int i=k;
        while(v[i]!=1){
            if(i==n)i=0;
            i++;
            if(v[i]==1){
                cout<<i<<endl;
                break;
            }
        }
    }
    input.close();
    output.close();
}
*/
// optimize code
/*#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    queue<int> q;
    for (int i = k - 1; i < n; i++) {
        if(v[i]==1)
           q.push(i);
    }
    for (int i = 0; i < k - 1; i++) {
        if(v[i]==1)
           q.push(i);
    }

    while (!q.empty()) {
        int idx = q.front();
        q.pop();
        if (v[idx] == 1) {
            cout << idx + 1 << endl;
            break;
        }
    }

    return 0;
}
*/
/*#include <bits/stdc++.h>
using namespace std;

int main() {
    ifstream input("input.txt");
    ofstream output("output.txt");

    int n, k;
    input >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        input >> a[i];
    }

    int index = k - 1;
    while (true) {
        if (a[index] == 1) {
            output << index + 1 << endl;
            break;
        }
        index = (index + 1) % n;
    }

    input.close();
    output.close();

    return 0;
}*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ifstream input("input.txt");
    ofstream output("output.txt");

    int n, k;
    input >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        input >> a[i];
    }

    int index = k - 1;
    while (true) {
        if (a[index] == 1) {
            output << index + 1 << endl;
            break;
        }
        index = (index + 1) % n;
    }

    input.close();
    output.close();

    return 0;
}