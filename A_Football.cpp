#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string F_team;
    unordered_map<string,int>teamCount;
    for(int i=0;i<n;i++){
        cin>>F_team;
        teamCount[F_team]++;
    }
    int maxGool=0;string maxTeam;
    for(auto pair : teamCount){
        if(pair.second>maxGool){
            maxGool=pair.second;
            maxTeam = pair.first;
        }
    }
    cout<<maxTeam<<endl;
}