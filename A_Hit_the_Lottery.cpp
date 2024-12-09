/*#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int x = 0;
    while (t >= 0)
    {
        if (t >= 100)
        {
            t -= 100;
        }
        else if (t < 100 && t >= 20)
        {
            t -= 20;
        }
        else if (t < 20 && t >= 10)
        {
            t -= 10;
        }
        else if (t < 10 && t >= 5)
        {
            t -= 5;
        }
        else
        {
            t--;
        }
        ++x;
    }
    cout << x-1 << endl;
}*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int x=n/100;//how many 100 tk note
    int y=(n-(x*100))/20;//how many 20 tk note
    int z=(n-(x*100)-(y*20))/10;//how many 10 tk note
    int k=(n-(x*100)-(y*20)-(z*10))/5;//how many 5 tk node
    int one =(n-(x*100)-(y*20)-(z*10)-(k*5));
    cout<<x+y+z+k+one<<endl;
}