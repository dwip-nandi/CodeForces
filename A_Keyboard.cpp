#include<bits/stdc++.h>
using namespace std;
int main(){
    char x;
    cin>>x;
    string s;
    cin>>s;
    if(x=='R'){
        for(auto c : s){
            if(c=='w')cout<<'q';
            if(c=='e')cout<<'w';
            if(c=='r')cout<<'e';
            if(c=='t')cout<<'r';
            if(c=='y')cout<<'t';
            if(c=='u')cout<<'y';
            if(c=='i')cout<<'u';
            if(c=='o')cout<<'i';
            if(c=='p')cout<<'o';
            if(c=='[')cout<<'p';
            if(c=='s')cout<<'a';
            if(c=='d')cout<<'s';
            if(c=='f')cout<<'d';
            if(c=='g')cout<<'f';
            if(c=='h')cout<<'g';
            if(c=='j')cout<<'h';
            if(c=='k')cout<<'j';
            if(c=='l')cout<<'k';
            if(c==';')cout<<'l';
            if(c=='x')cout<<'z';
            if(c=='c')cout<<'x';
            if(c=='v')cout<<'c';
            if(c=='b')cout<<'v';
            if(c=='n')cout<<'b';
            if(c=='m')cout<<'n';
            if(c==',')cout<<'m';
            //ext
            if(c=='\\')cout<<']';
            if(c==']')cout<<'[';
            if(c=='\'')cout<<';';
            if(c=='/')cout<<'.';
            if(c=='.')cout<<',';

        }cout<<endl;
    }else{
        for(auto c : s){
            if(c=='q')cout<<'w';
            if(c=='w')cout<<'e';
            if(c=='e')cout<<'r';
            if(c=='r')cout<<'t';
            if(c=='t')cout<<'y';
            if(c=='y')cout<<'u';
            if(c=='u')cout<<'i';
            if(c=='i')cout<<'o';
            if(c=='o')cout<<'p';
            if(c=='a')cout<<'s';
            if(c=='s')cout<<'d';
            if(c=='d')cout<<'f';
            if(c=='f')cout<<'g';
            if(c=='g')cout<<'h';
            if(c=='h')cout<<'j';
            if(c=='j')cout<<'k';
            if(c=='k')cout<<'l';
            if(c=='z')cout<<'x';
            if(c=='x')cout<<'c';
            if(c=='c')cout<<'v';
            if(c=='v')cout<<'b';
            if(c=='b')cout<<'n';
            if(c=='n')cout<<'m';
            //ext
            if(c=='p')cout<<'[';
            if(c=='[')cout<<']';
            if(c=='l')cout<<';';
            if(c==']')cout<<'\\';
            if(c==';')cout<<'\'';
            if(c=='m')cout<<',';
            if(c==',')cout<<'.';
            if(c=='.')cout<<'/';


        }cout<<endl;
    }
}