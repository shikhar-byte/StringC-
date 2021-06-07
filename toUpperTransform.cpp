#include "bits/stdc++.h"

using namespace std;

int main(){
    string s="dsadsdad";

    transform(s.begin(), s.end() , s.begin() , ::toupper);

    cout << s << endl;

    string ss="ADADKJKD";

    transform(ss.begin() , ss.end() , ss.begin() , ::tolower);

    cout << ss << endl;

}