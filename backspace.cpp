#include <bits/stdc++.h>

using namespace std;

int main() {
    
    string s;
    cin >> s;

    string result;

    for(auto i : s) {
        if(i == '<') {
            result.pop_back();
        }
        else {
            result.push_back(i);
        }
    }

    cout << result;
    
    return 0;
}