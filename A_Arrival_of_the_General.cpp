/*#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=1;i<=n;i++)cin>>a[i];
    int max=a[1], min=a[1],max_position=1,min_position=1;
    for(int i=1;i<=n;i++){
        if(max<a[i]){
            max=a[i];
            max_position =i;
        }
        if(min>=a[i]){
            min=a[i];
            min_position=i;
        }
    }
    int left_shift_max =0,right_shift_min=0,total_shift=0;
    
    if(max_position<=(n+1)/2 && min_position>=(n+1)/2 ){
        left_shift_max = max_position-1;
        right_shift_min= n-min_position;
        total_shift =left_shift_max+right_shift_min;
     }else{
        left_shift_max = max_position-1;
        right_shift_min= n-min_position;
        total_shift =left_shift_max+right_shift_min-1;
     }

    cout<<total_shift<<endl;
}*/

//optimize code
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];

    int max = a[0], min = a[0], max_position = 0, min_position = 0;
    for (int i = 0; i < n; i++) {
        if (max < a[i]) {
            max = a[i];
            max_position = i;
        }
        if (min >= a[i]) {
            min = a[i];
            min_position = i;
        }
    }

    int left_shift_max = max_position;
    int right_shift_min = n - 1 - min_position;
    int total_shift = left_shift_max + right_shift_min;

    if (max_position > min_position) {
        total_shift--;
    }

    cout << total_shift << endl;

    return 0;
}
