#include <bits/stdc++.h>

using namespace std;

int reverseDigits(int num) 
{ 
    int rev_num = 0; 
    while(num > 0) { 
        rev_num = rev_num*10 + num%10; 
        num = num/10; 
    } 
    return rev_num; 
}

int main(int argc, char const *argv[])
{
    int a, b;
    cin >> a >> b;
    int ra = reverseDigits(a);
    int rb = reverseDigits(b);

    ra > rb ? cout << ra << endl : cout << rb << endl;
    return 0;
}
