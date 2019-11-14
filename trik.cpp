#include <bits/stdc++.h>

using namespace std;
int a[4] = {};

string s;

void swap(int i , int j){
    int temp;
    temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}
int main() {
    cin >> s;
    a[1] = 1; //starts at left cup
    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'A') swap(1,2);
        if(s[i] == 'B') swap(2,3);
        if(s[i] == 'C') swap(1,3);
    }
    for(int i = 1; i < 4; i++){
        if(a[i] == 1 ) cout << i;
    }
    return 0;
}