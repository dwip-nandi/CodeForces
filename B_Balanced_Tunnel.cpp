/*#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> va(n);
    vector<int> vb(n);
    for (int i = 0; i < n; i++)
        cin >> va[i];
    for (int i = 0; i < n; i++)
        cin >> vb[i];
    int c=0;
    for (int i = 0; i < va.size(); i++) {
        for (int j = 0; j < vb.size(); j++) {
            if (va[i] == vb[j]) {
                if (j < i) {
                    c++;
                    i--;
                    j--;
                    vb.erase(vb.begin()+j);
                    va.erase(va.begin()+i);
                    break;
                }
            }
        }
    }
    for(auto ub:va)cout<<ub<<' ';
    cout<<endl;
    for(auto ua:vb)cout<<ua<<' ';
    cout<<endl;
    cout << c << endl;

    return 0;
}*/
/*#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> va(n);
    vector<int> vb(n);
    for (int i = 0; i < n; i++)
        cin >> va[i];
    for (int i = 0; i < n; i++)
        cin >> vb[i];

    int c = 0;
    unordered_map<int, int> pos;
    for (int i = 0; i < n; i++) {
        pos[vb[i]] = i;
    }

    int max_pos = -1;
    for (int i = 0; i < n; i++) {
        if (pos[va[i]] < max_pos) {
            c++;
        } else {
            max_pos = pos[va[i]];
        }
    }

    cout << c << endl;

    return 0;
}*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>va(n);
    vector<int>vb(n);
    for(int i=0;i<n;i++)cin>>va[i];
    for(int i=0;i<n;i++)cin>>vb[i];

    unordered_map<int,int>mp;
    for(int i=0;i<n;i++) mp[vb[i]]=i;

    int d=-1,c=0;

    for(int i=0;i<n;i++){
        if(mp[va[i]]<d){
            c++;
        }else{
            d=mp[va[i]];
        }
    }
    cout<<c<<endl;
}


