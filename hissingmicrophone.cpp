#include<bits/stdc++.h>
using namespace std;

string sub = "ss";

bool hissCheck(string str){
    bool flag = false;

    for(int i=0; i < str.size()-1; i++){
        if( str[i] == sub[0] && str[i+1] == sub[1]){
            flag = true;
            break;
        }
    }
    return flag;
}

int main(){
    string str;
    
    cin >> str;

    if(hissCheck(str)) cout << "hiss";
    else cout << "no hiss";
    
    return 0;
}