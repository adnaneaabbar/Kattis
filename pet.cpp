#include <bits/stdc++.h>

using namespace std;

int main() {
    int a[5] = {};
    int temp, max = 0, index;
    for(int j = 0; j <= 4; j++){
        
        for(int i = 0; i < 4; i++){
            cin >> temp;
            a[j] += temp;
        }

        if(a[j] > max){
            max = a[j];
            index = j+1;
        }

    }
    cout << index << " " << max;
    return 0;
}