#include <bits/stdc++.h>
using namespace std;
/* Given two strings s and goal, return true if and only if s can become goal after some number of shifts on s.

A shift on s consists of moving the leftmost character of s to the rightmost position.

For example, if s = "abcde", then it will be "bcdea" after one shift.


Example 1:

Input: s = "abcde", goal = "cdeab"
Output: true
*/
string shift(string data)
{
    char temp = data[data.length() - 1];
    for (int i = data.length() - 1; i > 0; i--)
    {
        data[i] = data[i - 1];
    }
    data[0] = temp;

    return data;
}
bool rotateString(string s, string goal)
{
    string rotatedString = s;
    for (int i = 0; i < s.length(); i++)
    {
        rotatedString = shift(rotatedString);
        if (rotatedString == goal)
            return true;
    }

    return false;
}
int main()
{
    string first, second;
    cout << "Enter first string " << endl;
    cin >> first;
    cout << "Enter second string" << endl;
    cin >> second;
    cout << rotateString(first, second);
    return 0;
}