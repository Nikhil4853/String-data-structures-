/*
Given a sentence in the form of a string, convert it into its equivalent mobile numeric keypad sequence.
*/
#include <bits/stdc++.h>
using namespace std;
string keypad(string s)
{
    string str[] = {"2", "22", "222", "3", "33", "333",
                    "4", "44", "444", "5", "55", "555",
                    "6", "66", "666", "7", "77", "777", "7777", "8", "88", "888",
                    "9", "99", "999", "9999"};
    string ans = "";
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ' ')
        {
            ans = ans + "0";
        }
        else
        {
            int index = s[i] - 'A';
            ans = ans + str[index];
        }
    }
    return ans;
}
int main()
{
    cout << "Enter string in a form capital" << endl;
    string s;
    cin >> s;
    cout << keypad(s);
    return 0;
}