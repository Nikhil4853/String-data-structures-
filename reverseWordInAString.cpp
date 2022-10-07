#include <bits/stdc++.h>
using namespace std;

/*

557. Reverse Words in a String III

Given a string s, reverse the order of characters in each word within a sentence while still preserving whitespace and initial word order.



Example 1:

Input: s = "Let's take LeetCode contest"
Output: "s'teL ekat edoCteeL tsetnoc"

*/
string reverseWords(string s)
{
    int i = 0;
    for (int j = 0; j < s.length(); j++)
    {
        if (s[j] == ' ')
        {
            reverse(s.begin() + i, s.begin() + j);
            i = j + 1;
        }
    }
    reverse(s.begin() + i, s.end());
    return s;
}
int main()
{
    string s;
    getline(cin, s);
    cout << reverseWords(s);

    return 0;
}