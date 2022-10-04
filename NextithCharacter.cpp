#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    char s;
    cout << "Enter lower case latter  " << endl;
    cin >> s;
    char i;
    cout << "Enter next ith number of characer " << endl;
    cin >> i;
    char a = s + i - '0';
    cout << a;

    return 0;
}