#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> customers;
    vector<int> repet; //count repetitions of the dice rolls
    int temp;

    repet.resize(7, 0);

    for(int i = 0; i < n; i++) {
        cin >> temp;
        customers.push_back(temp);
        repet[temp]++;
    }

    bool printed = false;
    for(int i = 6; i >= 1; i--) {
        if(repet[i] == 1) { //unique roll
            for(int j = 0; j < customers.size(); j++) {
                if(customers[j] == i) {  //finding customer with unique roll
                    cout << j+1 << endl; //print the entering customer
                    return 0;
                }
            }
        }
    }

    if(!printed) {
        cout << "none" << endl;
    }
    
    return 0;
}