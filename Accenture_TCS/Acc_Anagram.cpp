/*

Q. Anagram

An anagram is a word, phrase, or name formed by rearranging the letters of another word, phrase or name.
Write a function to check if the given two strings are anagrams or not. return “Yes” if they are anagrams otherwise return “No”.

Example 1:
Input 1: build
Input 2: dubli
Output: Yes

Example 2:
Input 1: abcde
Input 2: bcdef
Output: No

*/

#include <bits/stdc++.h>
using namespace std;

bool Anagram(string s1, string s2)
{
	if(s1.length() != s2.length())
		return false;

	sort(s1.begin(), s1.end());
	sort(s2.begin(), s2.end());

	for(int i=0 ; i<s1.length(); i++)
		if (s1[i] != s2[i])
			return false;

	return true;	

}


int main()
{
	string s1;
	string s2;
	cin >> s1;
	cin >> s2;

	if(Anagram(s1,s2))
		cout << "Yes";
	else
		cout << "No";

	return 0;
}
















