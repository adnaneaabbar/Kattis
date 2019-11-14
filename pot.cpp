#include <bits/stdc++.h>

using namespace std;

int main() {

    long long n, temp, power, num, x = 0;
    cin >> n;

    for (long long i = 0; i < n; i++){
        cin >> temp;
        power = temp % 10;
        num = (temp - power)/10;
        x += pow(num, power);
    }
    cout << x;
    return 0;
}