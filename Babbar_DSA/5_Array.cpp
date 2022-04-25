
/* 

Q.  Put all negative numbers before positive numbers

*/


/*

--------------
NOTE
--------------

if "swap" function is not available then use the following :-

 temp = a;
 a = b;
 b = temp;



*/

// Time complexity: O(N) 
// Auxiliary Space: O(1)



#include <bits/stdc++.h>
using namespace std;

void rearrange(int arr[], int n)
{
    int j = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            if (i != j)
                swap(arr[i], arr[j]);
            j++;
        }
    }
}





// A utility function to print an array
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
}




// Driver code
int main()
{
    int n;
    cin >> n;
    
    int Arr[n];
    for(int i = 0; i<n; i++)
    {
        cin >> Arr[i];
    }
    
    rearrange(Arr, n);
    printArray(Arr, n);

    return 0;

}

