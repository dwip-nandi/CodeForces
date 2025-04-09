#include <bits/stdc++.h>
using namespace std;
int main()
{
    string sa, sb;
    cin >> sa >> sb;


    if (sa==sb)
        cout << -1 << endl;
    else
        cout<<max(sa.size(),sb.size())<<endl;
}