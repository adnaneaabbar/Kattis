#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore();
    for(int i = 0; i < n; i++) {
        string line;
        getline(cin, line);

        
        if(line.substr(0, 11) == "Simon says ") cout << line.substr(11) << endl;
        else cout << endl;
    }

    return 0;
}