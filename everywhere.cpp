#include <bits/stdc++.h>

using namespace std;


int main() {
    int n;
    cin >> n;
    string temp;

    for(int i = 0; i < n; i++){
        int m;
        cin >> m;
        vector<string> v;

        for(int j = 0; j < m; j++){
            cin >> temp;
            v.push_back(temp);
        }

        int count = 0;
        sort(v.begin(), v.end());

        vector<string>::iterator it;


        it = unique(v.begin(), v.end());
        
        count = distance(v.begin(), it); 
        

        cout << count << endl;
    }
    
    return 0;
}