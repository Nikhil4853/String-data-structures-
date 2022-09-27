/*  Given two strings s and t, return true if t is an anagram of s, and false otherwise.

An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.



Example 1:

Input: s = "anagram", t = "nagaram"
Output: true


*/

#include <iostream>
#include <algorithm>
using namespace std;
bool CheckAnagrams(string str1, string str2)
{
    // time n(log n)

    if (str1.length() != str2.length())
        return false;

    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    for (int i = 0; i < str1.length(); i++)
    {
        if (str1[i] != str2[i])
            return false;
    }
    return true;
}
bool isAnagram(string s, string t)
{
    // time O(n^2)
    int count = 0;
    if (s.size() != t.size())
    {
        return false;
    }
    for (int i = 0; i < s.size(); i++)
    {
        for (int j = 0; j < s.size(); j++)
        {
            if (s[i] == t[j])
            {
                t.erase(t.begin() + j);
                count++;
                break;
            }
        }
    }
    if (s.size() == count)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    string Str1 = "INTEGER";
    string Str2 = "TEGERNI";
    if (CheckAnagrams(Str1, Str2))
        cout << "True" << endl;
    else
        cout << "False" << endl;
    return 0;
}