/*
 Q. Given an array of size n, write a function to find the sum of the largest and smallest element in the array.

Example 1:
Input 1: 4
Input 2: {9,5,0,11}
Output: 11

Example 2:
Input 1: 5
Input 2: {1,2,3,4,5}
Output: 11

*/






#include <bits/stdc++.h>
using namespace std;

int main(void) 
{
        int n;
        cin >> n;
        int a[n];
        for(int i = 0;i<n;i++)
                cin >> a[i];
        int max = a[0], int min = a[0];
        for(int i =1;i<n;i++)
        {
                if (a[i] > max)
                        max = a[i];
                if (a[i] < min)
                        min = a[i];

        }
        int sum = min + max;
        cout << sum;


}