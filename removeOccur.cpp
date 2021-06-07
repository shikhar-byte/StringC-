#include "bits/stdc++.h"

using namespace std;

int main(){
    string s,s1="";
    getline(cin , s);        

    char c;
    cin >> c;

    for(int i=0;i<s.size(); i++){
       if(s[i] != c){
           s1+=s[i];
       }
    }

    cout << s1;

    return 0;
}