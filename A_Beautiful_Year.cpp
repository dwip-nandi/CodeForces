#include<bits/stdc++.h>
using namespace std;
auto toBeautyfull(int year){
    string s= to_string(year);
    set<char>degit(s.begin(),s.end());
    return s.size()==degit.size();
}
int main(){
    int n;
    cin>>n;
    int year =n+1;
    while (!toBeautyfull(year))
    {
       year++;
    }
    cout<<year<<endl;
}


/*#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    string s = to_string(n);
    int c = 0, i;
    for ( i = n; i < 9001; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (s[j] == s[j + 1] || s[j] == s[j + 2] || s[j] == s[j + 3] || s[j + 1] == s[j + 2] || s[j + 1] == s[j + 3] || s[j + 2] == s[j + 3])
            {
                c++;
                break;
            }
        }
    }if(c>0)cout<<i<<endl;
    return 0;
}*/