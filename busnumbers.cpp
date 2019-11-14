#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    sort(arr, arr + n);

    int index = 0;
    while (index < n){

        int start = arr[index];

        while(index + 1 < n && arr[index] + 1 == arr[index + 1]){
            index++;
        }
        
        int end = arr[index];

        if (start == end) cout << start << " "; // 1 bus number
        else if (start == end - 1) cout << start << " " << end << " "; // 2 bus numbers
        else cout << start << "-" << end << " "; // more than 2 bus numbers

        index++;
    }
    return 0;
}