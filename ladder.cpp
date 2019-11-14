#include <bits/stdc++.h>

using namespace std;


int main() {
    double h,v;

    cin >> h >> v;

    cout << ceil(h/sin(v*M_PI/180));
    
    
    return 0;
}