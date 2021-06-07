#include "bits/stdc++.h"

using namespace std;

bool sub(string s1 , string s2){
    int n1=s1.size();
    int n2=s2.size();

    for(int i=0;i<=(n1-n2) ; i++){
        if(s2 == s1.substr(i,n2)){
            return true;
        }
    }
     return false;
}

int main(){
    string s1,s2;
    cin >> s1 >> s2;
    sub(s1,s2)?cout<<"Yes":cout<<"No";
}