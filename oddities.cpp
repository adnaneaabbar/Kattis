#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    int temp;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> temp;
        if(temp%2 == 0) cout << temp << " is even\n";
        else cout << temp << " is odd\n";
    }
    return 0;
}