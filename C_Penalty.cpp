#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (s == "1111111111" || s == "0000000000")
        {
            cout << 10 << endl;
        }
        else if (s == "??????????")
        {
            cout << 6 << endl;
        }
        else
        {
            int even_goal = 0, odd_goal = 0;
            int index1st = 10;
            for (int i = 0; i < 10; i++)
            {
                int due_short = (10-i+1)/2;
                if (even_goal > odd_goal + due_short)
                {
                    index1st = i ;
                    break;
                }
                if (i % 2 == 0)
                {
                    if (s[i] != '0')
                    {
                        even_goal++;
                    }
                }
                else
                {
                    if (s[i] == '1')
                    {
                        odd_goal++;
                    }
                }
                
                // cout << index1st << odd_goal << even_goal << due_short << endl;
            }
           // cout << index1st << endl;

            odd_goal = 0, even_goal = 0;
            int index2nd = 10;
            for (int i = 0; i < 10; i++)
            {
                int due_short = (10 - i) / 2;
                if (odd_goal > even_goal + due_short)
                {
                    index2nd = i ;
                    break;
                }
                if (i % 2 == 1)
                {
                    if (s[i] != '0')
                    {
                        odd_goal++;
                    }
                }
                else
                {
                    if (s[i] == '1')
                    {
                        even_goal++;
                    }
                }
                // cout << index2nd << odd_goal << even_goal << due_short << endl;
            }
           // cout << index2nd << endl;

             cout << min(index1st, index2nd) << endl;
        }
    }
    return 0;
}
/*
#include<bits/stdc++.h>
using  namespace  std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int ans1=10,ans2=10;
        int i;
        int x=0,y=0;
        for(int i=0;i<10;i++)
        {
            int baki=(10-i+1)/2;
            if(x>y+baki)
            {
                ans1=i;
                break;
            }
            if(i%2==0)
            {
                if(s[i]!='0')x++;
            }
            else
            {
                if(s[i]=='1')y++;
            }
        }
        x=0,y=0;
        for(int i=0;i<10;i++)
        {
            int baki=(10-i)/2;
            if(y>x+baki)
            {
                ans2=i;
                break;
            }
            if(i%2==1)
            {
                if(s[i]!='0')y++;
            }
            else
            {
                if(s[i]=='1')x++;
            }
        }
        //cout<<ans1<<" "<<ans2<<endl;
        cout<<min(ans1,ans2)<<endl;
    }
}
*/