#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    while(cin >> n && (n != -1) ){
        int d = 0;
        int s = 0, temp = 0, t = 0;
        for(int i = 0; i < n; i++){
            cin >> s >> t;
            d += s *(t - temp);
            temp = t;
        }
        cout << d << " miles\n"; 
    }
    
    return 0;
}