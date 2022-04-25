/*

Q.  Write a program to reverse an array or string

Examples : 
 

Input  : arr[] = {1, 2, 3}
Output : arr[] = {3, 2, 1}

Input :  arr[] = {4, 5, 1, 2}
Output : arr[] = {2, 1, 5, 4}



*/


//
//
//       Solution #1
// 
/*
    Iterative way :
 

1) Initialize start and end indexes as start = 0, end = n-1 
2) In a loop, swap arr[start] with arr[end] and change start and end as follows : 
start = start +1, end = end – 1

                           Time Complexity : O(n)
*/



#include <bits/stdc++.h>
using namespace std;


/* Function to reverse arr[] from start to end*/
void rvereseArray(int arr[], int start, int end)
{
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}   

/* Utility function to print an array */
void printArray(int arr[], int size)
{
for (int i = 0; i < size; i++)
cout << arr[i] << " ";

cout << endl;
}


/* Driver function to test above functions */

int main() {
    
    
    int n;
    
    cin >> n;
    
    int Arr[n];
    
    for(int i = 0; i<n; i++)
    {
        cin >> Arr[i];
    }
    
    rvereseArray(Arr, 0, n-1);
    printArray(Arr, n);

    
    return 0;
}



//
//
//       Solution #2
// 
/*
    Recursive Way :
 

1) Initialize start and end indexes as start = 0, end = n-1 
2) Swap arr[start] with arr[end] 
3) Recursively call reverse for rest of the array.

                           Time Complexity : O(n)
*/



// Recursive C++ program to reverse an array
#include <bits/stdc++.h>
using namespace std;

/* Function to reverse arr[] from start to end*/
void rvereseArray(int arr[], int start, int end)
{
    if (start >= end)
    return;
    
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    
    // Recursive Function calling
    rvereseArray(arr, start + 1, end - 1);
}   


/* Utility function to print an array */
void printArray(int arr[], int size)
{
for (int i = 0; i < size; i++)
cout << arr[i] << " ";

cout << endl;
}

/* Driver function to test above functions */
int main() {
     
    int n;
    cin >> n;
    
    int Arr[n];
    for(int i = 0; i<n; i++)
    {
        cin >> Arr[i];
    }
    
    rvereseArray(Arr, 0, n-1);
    printArray(Arr, n);

    return 0;
}














