#include <bits/stdc++.h>

using namespace std;

int main() {

    int n,x,temp, sum=0;
    cin >>x>>n;
    for(int i = 1;  i <= n; i++) {
        
        cin >> temp;
        sum += temp;

    }
    cout << (n+1)*x - sum;
    return 0;
}