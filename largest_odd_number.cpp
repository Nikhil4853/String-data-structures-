#include <bits/stdc++.h>
using namespace std;
string largestOddNumber(string num)
{
    while (!num.empty())
    {
        char n = num.back();
        if (n == '0' || n == '2' || n == '4' || n == '6' || n == '8')
        {
            num.pop_back();
        }
        else
        {
            return num;
        }
    }
    return "";
}
int main()
{
    cout << "enter number " << endl;
    string s;
    cin >> s;
    cout << largestOddNumber(s);
    return 0;
}