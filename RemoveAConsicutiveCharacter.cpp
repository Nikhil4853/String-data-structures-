/*
 S = aabb
Output:  ab
*/

#include <bits/stdc++.h>
using namespace std;
string remove(string s)
{
    string ans = "";
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != s[i - 1])
            ans = ans + s[i];
    }
    return ans;
}
int main()
{
    string str = "aabaa";
    cout << remove(str);
    return 0;
}
