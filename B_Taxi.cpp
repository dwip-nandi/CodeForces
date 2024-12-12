//optimize solution
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    int one =0,two=0,three=0,four=0;
    for(int i=0;i<n;i++){
       cin>>v[i];
       if(v[i]==4)four++;
       else if(v[i]==3)three++;
       else if(v[i]==2)two++;
       else one++;
    }
    int car =four+three+(two/2);
    one -= three;
    if(two%2!=0){
        car++;
        one -=2;
    }
    if(one>0){
        car += (one+3)/4;
    }
    //cout<<one<<endl;

    cout<<car<<endl;

}


/*#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    long long total=0;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
        total +=v[i];
    }
    if(total%4==0)cout<<total/4<<endl;
    else cout<<(total/4)+1<<endl;
}*/
/*#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    int k = 0, x = 0, y = 0, z = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] == 4)
            x++;
        else if (v[i] == 3)
            y++;
        else if (v[i] == 2)
            z++;
        else
            k++;
    }
   // cout << k<<y << endl;
    int total = 0;
    if (y >= k)
    {
        if (z % 2 == 0)
        {
            total = x + y + (z / 2);
        }
        else
        {
            total = x + y + (z / 2) + 1;
        }
    }
    else
    {
        if (z % 2 == 0)
        {
            if ((k - y) % 4 != 0)
            {
                total = x + y + (z / 2) + ((k - y) / 4) + 1;
            }
            else
            {
                total = x + y + (z / 2) + ((k - y) / 4);
            }
        }
        else
        {
            if ((k - y) % 4 == 0)
            {
                total = x + y + (z / 2) + ((k - y) / 4) + 1;
            }
            else
            {
                if ((k - y) <= 2)
                {
                    total = x + y + (z / 2) + 2;
                }
                else
                {
                    if ((k - y) % 2 == 0)
                    {
                        total = x + y + (z / 2) + ((k - y) / 4) + 1;
                    }
                    else
                    {
                        total = x + y + (z / 2) + ((k - y) / 4) + 2;
                    }
                }
            }
        }
    }
    cout << total << endl;
    return 0;
}*/

/*#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    int one = 0, two = 0, three = 0, four = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] == 4)
            four++;
        else if (v[i] == 3)
            three++;
        else if (v[i] == 2)
            two++;
        else
            one++;
    }
    int car = 0;
    if (three >= one)
    {
        car = four + three + ((two + 1) / 2);
    }
    else
    {
        int left_one = one - three;
        if (two > 0 && two % 2 == 0)
        {
            if (left_one > 0 && left_one % 4 == 0)
            {
                car = four + three + (two / 2) + (left_one / 4);
            }
            else
                car = four + three + (two / 2) + (left_one / 4) + 1;
        }
        else {
            if (left_one > 2)
            {
                int left_two_one = left_one - 2;
                if (left_two_one > 0 && left_two_one % 4 == 0)
                {
                    car = four + three + ((two+2) / 2) + (left_two_one / 4);
                }
                else
                    car = four + three + ((two+2) / 2) + (left_two_one / 4) + 1;
            }
            else
            {
                car = four + three + (two / 2) + 1;
            }
        }
    }
    cout << car << endl;
}
*/