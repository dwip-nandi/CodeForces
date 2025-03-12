#include<bits/stdc++.h>
using namespace std;
#define int long long
int isprime(int n){
    if(n<4)return 1;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return 1;
            break;
        }else return 0;
    }
}
signed main(){
    int t; cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n<=4)cout<<-1<<endl;
        else{
            cout<<1<<' '<<3<<' ';
            for(int i=7;i<=n;i+=2){
                cout<<i<<' ';
            }
            cout<<5<<' '<<4<<' '<<2<<' ';
            for(int i=6;i<=n;i+=2){
                cout<<i<<' ';
            }
            cout<<endl;
        }
    }
}
/*#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isComposite(int x) {
    if (x <= 1) return false;
    if (x <= 3) return false;
    if (x % 2 == 0 || x % 3 == 0) return true;
    for (int i = 5; i * i <= x; i += 6) {
        if (x % i == 0 || x % (i + 2) == 0) return true;
    }
    return false;
}

void solve() {
    int n;
    cin >> n;
    if (n == 2 || n == 3) {
        cout << -1 << endl;
        return;
    }
    vector<int> perm(n);
    for (int i = 0; i < n; ++i) {
        perm[i] = i + 1;
    }
    if (n % 2 == 0) {
        for (int i = 0; i < n; i += 2) {
            swap(perm[i], perm[i + 1]);
        }
    } else {
        for (int i = 0; i < n - 3; i += 2) {
            swap(perm[i], perm[i + 1]);
        }
        swap(perm[n - 3], perm[n - 2]);
        swap(perm[n - 2], perm[n - 1]);
    }
    for (int i = 0; i < n; ++i) {
        cout << perm[i] << " ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

*/
/*

#include <iostream>
#include <cmath>

bool isPrimeRecursive(int n, int divisor) {
    if (n <= 1) {
        return false;
    }
    if (divisor == 1) {
        return true;
    }
    if (n % divisor == 0) {
        return false;
    }
    return isPrimeRecursive(n, divisor - 1);
}

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    return isPrimeRecursive(n, static_cast<int>(std::sqrt(n)));
}

int main() {
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;

    if (isPrime(number)) {
        std::cout << number << " is a prime number." << std::endl;
    } else {
        std::cout << number << " is not a prime number." << std::endl;
    }

    return 0;
}
*/