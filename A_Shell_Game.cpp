/*#include<bits/stdc++.h>
using namespace std;
int main(){
    ifstream input("input.txt"); 
    ofstream output("output.txt");
    int bp; 
    cin>>bp;
    for(int i=0;i<3;i++){
        int c1,c2;
        cin>>c1>>c2;

        if(bp==c1){
            bp=c2;
        }else if(bp == c2){
            bp =c1;
        }
    }
    cout<<bp<<endl;
}*/

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream input("input.txt");
    ofstream output("output.txt");

    int ball_position;
    input >> ball_position;
    
    for (int i = 0; i < 3; i++) {
        int cup1, cup2;
        input >> cup1 >> cup2;
        
        if (ball_position == cup1) {
            ball_position = cup2;
        } else if (ball_position == cup2) {
            ball_position = cup1;
        }
    }
    
    output << ball_position << endl;
    return 0;
}
