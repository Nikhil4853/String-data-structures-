#include <bits/stdc++.h>
using namespace std;
int main()
{
    char c[26] = {'Q', 'W', 'E', 'R', 'T', 'Y', 'U', 'I', 'O', 'P', 'A', 'S', 'D', 'F', 'G', 'H', 'J', 'K', 'L', 'Z', 'X', 'C', 'V', 'B', 'N', 'M'};
    // string s = "qwertyuiopasdfghjklzxcvbnm";
    for (int i = 0; i < 26; i++)
    {
        char n = c[i] - 'A' + 'a';
        cout << n << n << n << n << " " << i + 1 << "\n";
    }

    return 0;
}