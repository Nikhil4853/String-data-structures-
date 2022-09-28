/* Given an input string s, reverse the order of the words.

A word is defined as a sequence of non-space characters. The words in s will be separated by at least one space.

Return a string of the words in reverse order concatenated by a single space.

Note that s may contain leading or trailing spaces or multiple spaces between two words. The returned string should only have a single space separating the words. Do not include any extra spaces.



Example 1:

Input: s = "the sky is blue"
Output: "blue is sky the"  */

#include <bits/stdc++.h>
using namespace std;
string reverseWords(string s)
{
    int left = 0;
    int right = s.length() - 1;
    string temp = "";
    string ans = "";
    while (left <= right)
    {
        char ch = s[left];
        if (ch != ' ')
        {
            temp += ch;
        }
        else if (ch == ' ')
        {
            if (ans != "")
                ans = temp + " " + ans;
            else
                ans = temp;
            temp = "";
        }
        left++;
    }
    if (temp != "")
    {
        if (ans != "")
            ans = temp + " " + ans;
        else
            ans = temp;
    }
    return ans;
}
int main()
{
    string s;
    cout << "Enter string " << endl;
    cin >> s;
    reverseWords(s);
    return 0;
}