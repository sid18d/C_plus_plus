// Diagonal movement  , Problem Code: DIAGMOVE
// CodeChef

/*

Given the coordinates (x,y) of a point in 2-D plane. Find if it is possible to reach (x,y)
from (0,0). The only possible moves from any coordinate (i,j)
 are as follows:

Go to the point with coordinates (i+1,j+1)
Go to the point with coordinates (i+1,j−1)
Go to the point with coordinates (i−1,j+1)
Go to the point with coordinates (i−1,j−1)
.




*/

#include <iostream>
using namespace std;
#define ll long long int

int main() {
	// your code goes here
	ll t;
	cin>>t;
	while(t>0)
	{
	    int x,y;
	    cin>>x>>y;
	    if((x+y)%2!=0)
	    {
	        cout<<"NO"<<endl;
	    }
	    else{
	        cout<<"YES"<<endl;
	    }
	    t--;
	    
	}
	return 0;
}