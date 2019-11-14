#include <bits/stdc++.h>

using namespace std;

int main() {
    string str;
    cin >> str;
    //STL functs
    string::iterator it;
    it = unique( str.begin(), str.end() );
    str.resize( distance( str.begin(), it ) );

    cout << str << endl;
}