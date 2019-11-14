#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b ;
    double temp;
    cin >> a >> b;
    temp = a*b;
    while(ceil(temp/a) >= b){
        temp--;
    }
    cout << temp+1;
    return 0;
}