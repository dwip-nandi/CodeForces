/*#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    vector<int>v(n);
    map<int,int>mp;
    for(int i=0;i<n;i++){
        cin>>v[i];
        mp[v[i]]++;
    }
    int maxSize=0,com=0,index=0;
    for(int i=0;i<mp.size();i++){
        if(mp[i].first*mp[i].second >maxSize){
                maxSize=mp[i].first*mp[i].second;
                index =i+1;
        }
    }
    cout<<index<<mp.size()<<endl;
}*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    map<int, int> mp;

    for (int i = 0; i < n; i++) {
        cin >> v[i];
        mp[v[i]]++;
    }

    int maxHeight = 0;
    for (const auto& pair : mp) {
        if (pair.second > maxHeight) {
            maxHeight = pair.second;
        }
    }

    cout << maxHeight << " " << mp.size() << endl;
    return 0;
}
