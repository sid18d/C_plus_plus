/*

CodeChef
Disabled King , Problem Code: DISABLEDKING

*/



/*

SOLUTION #1

*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		if (n % 2 == 0)
			cout << n << "\n";
		else
			cout << n-1 << "\n";

	}	

	return 0;

}


/*

SOLUTION #2

*/


#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		cout << n - (n % 2) << "\n";

	}	

	return 0;

}


