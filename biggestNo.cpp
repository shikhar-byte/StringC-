# include "bits/stdc++.h"
using namespace std;

int main(){
    string s="523098782";

    sort( s.begin() , s.end() , greater<int>() );

    cout << s << endl;
}