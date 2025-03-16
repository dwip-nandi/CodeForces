// update code using priority_queue
#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int sum = 0;
        priority_queue<int> q;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x == 0 && !q.empty())
            {
                sum += q.top();
                q.pop();
            }
            else
            {
                q.push(x);
            }
        }
        cout << sum << endl;
    }
}
/*#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        int ind=-1;
        for(int i=0;i<n;i++){
            cin>>v[i];
            if(v[i]==0)ind =i;
        }
        vector<int>vs;
        for(int i=0;i<=ind;i++){
            vs.push_back(v[i]);
        }
        int j=ind;
        while(j>0){
            if(vs[j]==0)ind =j;
        }

        long long s=0,c=0;
        for(int i=0;i<=ind;i++){
             if(vs[i]==0)c++;
        }
        //cout<<c<<endl;
        int x=ind;
        while(c>0){
            s += vs[x];
            c--;
            x--;
        }
        // for(int i=n-1;i>=0;i--){
        //     if(v[i]==0){
        //         c++;
        //         continue;
        //     }
        //     while(c>0){
        //        s += v[i];
        //        c--;
        //        i--;
        //     }
        // }
        cout<<s<<endl;

    }
}*/
/*#include <bits/stdc++.h>

using i64 = long long;

void solve() {
    int n;
    std::cin >> n;

    std::priority_queue<int> q;
    i64 ans = 0;
    for (int i = 0; i < n; i++) {
        int s;
        std::cin >> s;

        if (s == 0) {
            if (!q.empty()) {
                ans += q.top();
                q.pop();
            }
        } else {
            q.push(s);
        }
    }

    std::cout << ans << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}*/