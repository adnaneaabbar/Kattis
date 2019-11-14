#include <bits/stdc++.h>

using namespace std;

int main() {

    int h,m;
    cin >> h >> m;

    if(m>=45){
        cout << h << " " << m-45;
        return 0;
    } else {
        m = 60 - 45 + m;
        if(h>0) cout << h-1 << " " << m;
        else cout << 23 << " " << m;
    }
    
    return 0;
}