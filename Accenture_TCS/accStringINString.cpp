/*

Q.String within String

Given two strings, ‘X’ and ‘Y’ (length(X)>=1, length(Y)<=10000), find out if ‘Y’ is contained in ‘X’


Example 1:

Input 1: abac
Input 2: ab

Output: yes

Explanation:
ab is present with abac


Example 2:

Input 1: xyac
Input 2: xz
Output: no
*/



#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int isSubstring(string s1, string s2)
{
    int M = s1.length();
    int N = s2.length();

    for (int i = 0; i <= N - M; i++) {
        int j;
        for (j = 0; j < M; j++)
            if (s2[i + j] != s1[j])
                break;
 
        if (j == M)
            return i;
    }
 
    return -1;
}

int main()
{
    string s1;
    string s2;
    cin >> s1;
    cin >> s2;
    int res = isSubstring(s2, s1);
    if (res == -1)
        cout << "No";
    else
        cout << "Yes";
    return 0;
}


