#include <bits/stdc++.h>

using namespace std;

int main() {

    int temp[6];
    for(int i = 0;  i < 6; i++) {
        cin >> temp[i];
        if(i==0 || i==1) temp[i] = 1-temp[i];
        else if(i==5) temp[i] = 8-temp[i];
        else temp[i] = 2-temp[i];
        cout << temp[i] << " ";
    }

    return 0;
}