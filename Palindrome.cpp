#include "bits/stdc++.h"
using namespace std;

int isPal(string s){
    string str="";

    for(int i=s.size()-1;i>=0;i--){
        str+=s[i];
    }

    if(!s.compare(str)){
        return 1;
    }

    else{
        return 0;
    }
    
    
}

int main(){
    string s;
    getline(cin , s);

    cout << isPal(s);

    // string str="";

    // for(int i=s.size()-1; i>=0;i--){
    //     str+=s[i];
    // }

    // if(!s.compare(str)){
    //     cout<< 1;
    // }
    // else {
    //     cout << 0;
    // }
}