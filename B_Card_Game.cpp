/*#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int a1, a2, b1, b2;
        cin >> a1 >> a2 >> b1 >> b2;
        int c = 0;
        if (a1 > b1)
        {
            c = c + 1;
        }
        else
        {
            c = c - 1;
        }
        if (a1 > b2)
        {
            c = c + 1;
        }
        else
        {
            c = c - 1;
        }
        if (a2 > b1)
        {
            c = c + 1;
        }
        else
        {
            c = c - 1;
        }
        if (a2 > b2)
        {
            c = c + 1;
        }
        else
        {
            c = c - 1;
        }
        if (c > 0)
            cout << c << endl;
        else
            cout << 0 << endl;
    }
    return 0;
}*/
/*#include <bits/stdc__
using namespace std;

int suneet_wins(int a1, int a2, int b1, int b2) {
    int wins = 0;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            int suneet_card1 = (i == 0) ? a1 : a2;
            int slavic_card1 = (j == 0) ? b1 : b2;
            int suneet_card2 = (i == 0) ? a2 : a1;
            int slavic_card2 = (j == 0) ? b2 : b1;

            int round1_winner = (suneet_card1 > slavic_card1) ? 1 : 0;
            int round2_winner = (suneet_card2 > slavic_card2) ? 1 : 0;

            if (round1_winner + round2_winner > 1) {
                wins++;
            }
        }
    }
    return wins;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a1, a2, b1, b2;
        cin >> a1 >> a2 >> b1 >> b2;
        cout << suneet_wins(a1, a2, b1, b2) << endl;
    }

    return 0;
}
*/
// update code
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a1, a2, b1, b2;
        cin >> a1 >> a2 >> b1 >> b2;
        int c=0;
        if((a1>b1 && a2>=b2) || (a1>=b1 && a2>b2)) c +=2;
        if((a2>b1 && a1>=b2) || (a2>=b1 && a1>b2)) c += 2;

        cout<<c<<endl;
    }
}