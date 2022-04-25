/*

Q. Given an array A[] consisting 0s, 1s and 2s. 
The task is to write a function that sorts the given array. 
The functions should put all 0s first, then all 1s and all 2s in last.


Examples:-  

Input: {0, 1, 2, 0, 1, 2}

Output: {0, 0, 1, 1, 2, 2}


-------------
Approach
-------------

* The problem is similar to our old post Segregate 0s and 1s in an array, 
  and both of these problems are variation of famous Dutch national flag problem.

* The problem was posed with three colours, here `0', `1' and `2'. 
* The array is divided into four sections: 
* a[1..Lo-1] zeroes (red)
* a[Lo..Mid-1] ones (white)
* a[Mid..Hi] unknown
* a[Hi+1..N] twos (blue)  


-------------
Algorithm
-------------

* Keep three indices low = 1, mid = 1 and high = N 
* Traverse the array from start to end and mid is less than high. (Loop counter is i)
* If the element is 0 then swap the element with the element at index low and update low = low + 1 and mid = mid + 1
* If the element is 1 then update mid = mid + 1
* If the element is 2 then swap the element with the element at index high and update high = high - 1 and update i = i - 1. As the swapped element is not processed
* Print the array

*/

#include <bits/stdc++.h>
using namespace std;

// Function to sort the input array,
// the array is assumed

// to have values in {0, 1, 2}
void sort012(int a[], int arr_size)
{
    int lo = 0;
    int hi = arr_size - 1;
    int mid = 0;

    // Iterate till all the elements
    // are sorted
    while (mid <= hi) {
        switch (a[mid]) {

        // If the element is 0
        case 0:
            swap(a[lo++], a[mid++]);
            break;

        // If the element is 1 .
        case 1:
            mid++;
            break;

        // If the element is 2
        case 2:
            swap(a[mid], a[hi--]);
            break;
        }
    }
}


// Function to print array arr[]

void printArray(int arr[], int arr_size)
{
    // Iterate and print every element
    for (int i = 0; i < arr_size; i++)
        cout << arr[i] << " ";
}




int main()
{
    int n;
    cin >> n;
    
    int Arr[n];
    for(int i = 0; i<n; i++)
    {
        cin >> Arr[i];
    }
    
    sort012(Arr, n);
    printArray(Arr, n);

    return 0;

}



/*

--------------
NOTE
--------------

if "swap" function is not available then use the following :-

 temp = a;
 a = b;
 b = temp;



*/




