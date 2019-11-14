#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    double x, y;
    cin >> x >> y;

    double len = sqrt((x*x) + (y*y));

    for(int i = 0; i < n; i++) {

        int temp;
        cin >> temp;

        if(temp <= len) cout << "DA\n";
        else cout << "NE\n";
    }

    return 0;
}