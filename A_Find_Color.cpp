// update code
#include <bits/stdc++.h>

using namespace std;

string dc(int x, int y) {
    double d = sqrt(x * x + y * y);
    if (d == floor(d)) {
        return "black";
    }

    int radius = ceil(d);
    if (x * y > 0) {
        return (radius % 2 == 0) ? "white" : "black";
    } else {
        return (radius % 2 != 0) ? "white" : "black";
    }
}

int main() {
    int x, y;
    cin >> x >> y;
    cout << dc(x, y) << endl;
    return 0;
}


/*#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, y;
    cin >> x >> y;
    bool isBlack = false;
    if ((x > 0 && y >= 0) || (x < 0 && y <= 0))
    {
        if (x % 2 != 0 && y%2 ==0)
            isBlack = true;
    }
    else if ((x < 0 && y >= 0) || (x > 0 && y <= 0))
    {
        if (x % 2 == 0 )
            isBlack = true;
    }
    if (isBlack)
        cout << "white" << endl;
    else
        cout << "black" << endl;
}
*/