#include <bits/stdc++.h>

using namespace std;

int count_a(string s){
    int count = 0;
    for(int i=0; i<s.size(); i++){
        if((int)s[i] == 97) count++;
    }
    return count;
}

int main(){

    string s,p;
    cin >> s >> p;
    if(count_a(s) >= count_a(p)) cout << "go";
    else cout << "no";
    return 0;
}