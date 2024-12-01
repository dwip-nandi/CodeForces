#include<bits/stdc++.h>
#include<string.h>
using namespace std;
string toUpperCase(const string& str) { 
    string result = str; 
    transform(result.begin(), result.end(), result.begin(), ::toupper);
    return result;
}
int main(){
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    int n =s1.size();
    string upStr1 = toUpperCase(s1);
    //cout << "Uppercase string: " << uppercased1 << endl;
    string upStr2 = toUpperCase(s2);
    //cout << "Uppercase string: " << uppercased2 << endl;
    if(upStr1==upStr2)cout<<0<<endl;
    else if(upStr1>upStr2)cout<<1<<endl;
    else cout<<-1<<endl;

}