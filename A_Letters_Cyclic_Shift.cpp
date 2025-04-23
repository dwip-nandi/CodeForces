#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s,t;
    cin >> s;
    t=s;
    set<char> st;
    for(int j=0;j<s.size();j++){
        st.insert(s[j]);
        if(st.size()>=2){
            break;
        }
    }
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != 'a')
        {
            s[i]=s[i]-1;
            if (s[i + 1] == 'a')
            {   
                break;
            }
        }
    }
    //cout<<s[0]<<endl;
    if (st.size() == 1 && t[0]=='a'  )
    {
        s[s.size() - 1] = 'z';
        cout << s << endl;
    }
    else
    {
        cout << s << endl;
    }
}