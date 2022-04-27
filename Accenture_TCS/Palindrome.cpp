
//
//
// Solutioon #1
//
//


#include <bits/stdc++.h>
using namespace std;

int Palind(string str1)
{
    
    for(int i=0; i< str1.length() / 2 ; i++)
    {
        
        if(str1[i] != str1[str1.length() - i - 1]){  
        return (-1);
        }
        else
        {
        return (1);
        }
    }
    return 0;
}



int main() {
    // your code goes here
    string s;
    cin >> s;
    
    cout << Palind(s) <<endl;
    
    return 0;
}
 
//
//
// Solutioon #2
//
//





