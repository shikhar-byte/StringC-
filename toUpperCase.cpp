#include<iostream>
#include<string>

using namespace std;

int main(){


    // To UpperCase

    string str="addkljlhdndjsadj";

    for(int i=0; i<str.length() ; i++){
        if(str[i] >= 'a' && str[i] <='z'){
            str[i] -=32;
        }
    }
    cout << str;


    // TO Lower Case
    
    string s="AJSDGJSAGDSABD";

    for(int i=0; i<s.length() ; i++){
        if(s[i] >= 'A' && s[i] <='Z'){
            s[i] +=32;
        }
    }
    cout << s;
}