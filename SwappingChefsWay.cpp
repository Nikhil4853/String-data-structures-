/*
Problem
Chef is working on his swap-based sorting algorithm for strings.
Given a string SS of length NN, he wants to know whether he can sort the string using his algorithm.
According to the algorithm, one can perform the following operation on string SS any number of times:
Choose some index ii (1 \leq i \leq N)(1≤i≤N) and swap the i^{th}i th  character from the front and the i^{th}i
th  character from the back.More formally, choose an index ii and swap S_iSi  and S_{(N+1-i)}S(N+1−i) .
For example, \underline{\texttt{d}} \texttt{cb} \underline{\texttt{a}} dcba
can be converted to \underline{\texttt{a}} \texttt{cb} \underline{\texttt{d}} acbd​
  using one operation where i = 1i=1.

Help Chef find if it is possible to sort the string using any (possibly zero) number of operations.

Input Format
The first line of the input contains a single integer TT, denoting the number of test cases. The description of TT test cases follows.
The first line of each test case contains NN, the length of the string.
The second line contains a string SS of length NN consisting of lowercase letters of the Latin alphabet.

Output Format
For each test case, print \texttt{YES}YES if it is possible to sort the string by
performing any number of operations. Otherwise, print \texttt{NO}NO.

Input
3
4
dbca
3
ccc
3
bza

output
YES
YES
NO

*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    cout << "enter number of test case" << endl;
    cin >> t;
    while (t--)
    {
        cout << "enter size of string" << endl;
        cin >> n;
        string s;
        cout << "enter string " << endl;
        cin >> s;
        int first = 0;
        int last = n - 1;
        while (last >= first)
        {
            if (s[first] >= s[last])
            {
                swap(s[first], s[last]);
            }
            last--;
            first++;
        }
        if (is_sorted(s.begin(), s.end()))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
