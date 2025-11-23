// #include <bits/stdc++.h>
// using namespace std;
// struct result
// {
//     pair<int, int> fm;
//     pair<int, int> sm;
//     pair<int, int> tm;
// };

// result find_max(const vector<int> &v)
// {
//     result  r;
//     r.fm = {INT_MIN, -1}; r.sm = {INT_MIN, -1}; r.tm = {INT_MIN, -1};

//     for (int i = 0; i < v.size(); i++)
//     {
//         int cu = v[i];
//         if (cu > r.fm.first)
//         {
//             r.tm = r.sm;
//             r.sm = r.fm;
//             r.fm = {cu, i};
//         }
//         else if (cu > r.sm.first && cu != r.fm.first)
//         {
//             r.tm = r.sm;
//             r.sm = {cu, i};
//         }
//         else if (cu > r.tm.first && cu != r.sm.first)
//         {
//             r.tm = {cu, i};
//         }
//     }
//     return r;
// }

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         vector<int> va(n);
//         vector<int> vb(n);
//         vector<int> vc(n);

//         for (int i = 0; i < n; i++)
//         {
//             cin >> va[i];
//         }
//         for (int i = 0; i < n; i++)
//         {
//             cin >> vb[i];
//         }
//         for (int i = 0; i < n; i++)
//         {
//             cin >> vc[i];
//         }

//         result r_a = find_max(va);
//         result r_b = find_max(vb);
//         result r_c = find_max(vc);

//         // cout << r_a.fm.first << ' ' << r_a.fm.second << endl;
//         // cout << r_a.sm.first << ' ' << r_a.sm.second << endl;
//         // cout << r_a.tm.first << ' ' << r_a.tm.second << endl;
//          long long ans =0;
//         // if((r_a.fm.second!=r_b.fm.second) && (r_a.fm.second!=r_c.fm.second)&&(r_c.fm.second!=r_b.fm.second)){
//         //     ans = r_a.fm.first+r_b.fm.first+r_c.fm.first;
//         // }else if((r_a.fm.second==r_b.fm.second) && (r_a.fm.second!=r_c.fm.second)){
//         //     ans = r_a.fm.first+max(r_a.sm.first,r_b.sm.first)+r_c.fm.first;
//         // }else if((r_a.fm.second!=r_b.fm.second) && (r_a.fm.second==r_c.fm.second)){
//         //     ans = r_a.fm.first+max(r_a.sm.first,r_c.sm.first)+r_b.fm.first;
//         // }else if((r_a.fm.second!=r_b.fm.second) && (r_b.fm.second!=r_c.fm.second)){
//         //     ans = r_a.fm.first+max(r_c.sm.first,r_b.sm.first)+r_c.fm.first;
//         // }else if((r_a.fm.second==r_b.fm.second) && (r_a.fm.second==r_c.fm.second)){
//         //     ans = max(r_a.fm.first,max(r_b.fm.first,r_c.fm.first))+
//         // }

//         for (int i = 0; i < 3; i++) {
// 			for (int j = 0; j < 3; j++) {
// 				for (int k = 0; k < 3; k++) {
// 					int x = maxa[i], y = maxb[j], z = maxc[k];

// 					if ((x == y) or (y == z) or (z == x))
// 						continue;

// 					ans = max(ans, a[x] + b[y] + c[z]); 
// 				}
// 			}
// 		} 

// 		cout << ans << endl; 
	
//     }
// }

#include <bits/stdc++.h>
using namespace std;

vector<pair<int,int>> top3_candidates(const vector<int>& v) {
    int n = (int)v.size();
    vector<pair<int,int>> all;
    all.reserve(n);
    for (int i = 0; i < n; ++i) all.emplace_back(v[i], i);
    sort(all.begin(), all.end(), [](const pair<int,int>& a, const pair<int,int>& b){
        if (a.first != b.first) return a.first > b.first;
        return a.second < b.second;
    });
    vector<pair<int,int>> res;
    for (int i = 0; i < (int)all.size() && i < 3; ++i) res.push_back(all[i]);
    while (res.size() < 3) res.emplace_back(INT_MIN, -1);
    return res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        int n;
        cin >> n;
        vector<int> va(n), vb(n), vc(n);
        for (int i = 0; i < n; ++i) cin >> va[i];
        for (int i = 0; i < n; ++i) cin >> vb[i];
        for (int i = 0; i < n; ++i) cin >> vc[i];

        auto A = top3_candidates(va); 
        auto B = top3_candidates(vb);
        auto C = top3_candidates(vc);

        long long ans = LLONG_MIN;

        for (auto &pa : A) {
            for (auto &pb : B) {
                for (auto &pc : C) {
                    if (pa.second == -1 || pb.second == -1 || pc.second == -1) continue; 
                    if (pa.second == pb.second || pb.second == pc.second || pc.second == pa.second) continue;
                    long long sum = (long long)pa.first + pb.first + pc.first;
                    ans = max(ans, sum);
                }
            }
        }

        if (ans == LLONG_MIN) {
            for (int i = 0; i < n; ++i) {
                for (int j = 0; j < n; ++j) {
                    if (j == i) continue;
                    for (int k = 0; k < n; ++k) {
                        if (k == i || k == j) continue;
                        long long sum = (long long)va[i] + vb[j] + vc[k];
                        ans = max(ans, sum);
                    }
                }
            }
        }
        if (ans == LLONG_MIN) ans = 0;

        cout << ans << '\n';
    }
    return 0;
}
