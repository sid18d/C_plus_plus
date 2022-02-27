/*

Q. Factorial

Given ‘a’ (1<=n<=100), find the factorial of ‘n’. The factorial of ‘n’ is defined as the product of all integers.

Example 1:
Input : 5
Output: 120
Explanation:
5!=5*4*3*2*1 = 120

*/



#include <bits/stdc++.h>
using namespace std;


unsigned int fact(unsigned int n){

    if (n == 0)
        return 1;
    return n * fact(n-1);
}


int main(void)
{

    int num;
    cin >> num;
    cout << fact(num) << endl;

}