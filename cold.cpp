#include <bits/stdc++.h>

using namespace std;

int main(){

    long long n, temp, count=0;
    cin >> n;
    for (long long i = 0; i < n; i++){
        cin >> temp;
        if(temp < 0) count++;
    }
    
    cout << count;
    return 0;
}