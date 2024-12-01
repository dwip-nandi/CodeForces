/* #include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string str =to_string(n);
    int k=0,s = str.size();
    
    if(n%4==0 || n%7==0){
        cout<<"YES"<<endl;
    }
    else{
        for(char c:str){
            if(c == '7' || c == '4')k++;
        }
        if(k==s)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
*/
#include <bits/stdc++.h>
using namespace std;

bool isLucky(int num) {
    while (num > 0) {
        int digit = num % 10;
        if (digit != 4 && digit != 7) {
            return false;
        }
        num /= 10;
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    bool almostLucky = false;
    for (int i = 1; i <= 1000; ++i) {
        if (isLucky(i) && n % i == 0) {
            almostLucky = true;
            break;
        }
    }

    if (almostLucky) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
