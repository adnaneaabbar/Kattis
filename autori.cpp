#include <bits/stdc++.h>

using namespace std;

int main(){

    string s, concat ="";
    cin >> s;
    concat += s[0];
    for(int i = 1; i < s.size(); i++){
        if((int)s[i] == 45) concat += s[i+1];
    }
    cout << concat;
    return 0;
}