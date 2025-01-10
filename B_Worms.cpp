/*#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    vector<long long>vs;
    long long sum=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        sum += v[i];
        vs.push_back(sum);
    }
    int m;
    cin>>m;
    while(m--){
        int q;
        int c=0;
        cin>>q;
        while(q>vs[c])c++;
        cout<<c+1<<endl;
    }
}*/
// optimize code-----
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    vector<long long> vs(n);
    long long sum = 0;
    for(int i = 0; i < n; i++){
        cin >> v[i];
        sum += v[i];
        vs[i] = sum;
    }
    int m;
    cin >> m;
    while(m--){
        int q;
        cin >> q;
        int c = lower_bound(vs.begin(), vs.end(), q) - vs.begin();
        cout << c + 1 << endl;
    }
    return 0;
}
