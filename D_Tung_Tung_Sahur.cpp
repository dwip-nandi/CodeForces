#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string p, s;
        cin >> p >> s;

        vector<pair<char, int>> mps, mpp;
        int cs = 1;
        for (int i = 1; i < s.size(); i++)
        {
            if (s[i] == s[i - 1])
            {
                cs++;
            }
            else
            {
                mps.push_back({s[i - 1], cs});
                cs = 1;
            }
        }
        mps.push_back({s.back(), cs});

        int cp = 1;
        for (int i = 1; i < p.size(); i++)
        {
            if (p[i] == p[i - 1])
            {
                cp++;
            }
            else
            {
                mpp.push_back({p[i - 1], cp});
                cp = 1;
            }
        }
        mpp.push_back({p.back(), cp});

        bool isPoosible = true;
        if(mps.size() != mpp.size()){
            isPoosible=false;
        }
        else
        {
            for (int i = 0; i < mps.size();i++)
            {
                if (mps[i].first != mpp[i].first){
                    isPoosible=false;
                    break;
                }
                else 
                {
                    if (mps[i].second < mpp[i].second || (2 * mpp[i].second < mps[i].second))
                    {
                        isPoosible = false;
                        break;
                    }
                }
            }
        }
        if (isPoosible)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
