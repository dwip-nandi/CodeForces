#include <bits/stdc++.h>
using namespace std;

string toRadix(int num, int radix) {
    if (num == 0) return "0";
    string result = "";
    while (num > 0) {
        int remainder = num % radix;
        result = (remainder < 10 ? char('0' + remainder) : char('A' + remainder - 10)) + result;
        num /= radix;
    }
    return result;
}

int main() {
    int k;
    cin >> k;
    vector<vector<string>> table(k - 1, vector<string>(k - 1));

    for (int i = 1; i < k; ++i) {
        for (int j = 1; j < k; ++j) {
            table[i - 1][j - 1] = toRadix(i * j, k);
        }
    }

    for (int i = 0; i < k - 1; ++i) {
        for (int j = 0; j < k - 1; ++j) {
            cout << setw(3) << table[i][j];
        }
        cout << endl;
    }

    return 0;
}

/*
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<n;i++){
        for(int j=1;j<n;j++){
            if(i==n-1 && j==n-1 && i!=1 && j!=1){
                cout<<i-1<<j-i+1<<' ';
            }else {
                if(i*j<10 && (i)*(j+1)<10 && i!=n-1 && j!=n-1)cout<<i*j<<"  ";
                else 
                   cout<<i*j<<" ";
            }
        }
        cout<<endl;
    }
}*/