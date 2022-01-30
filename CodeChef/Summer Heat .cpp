// Summer Heat   ,  Problem Code: COCONUT
// Codechef



#include <iostream>
using namespace std;

int main() {

	long t;
	cin>>t;
	while(t--)
	{
	     long a,b,c,d,s=0,x=0;
	     cin>>a>>b>>c>>d;
	     s=(c/a);
	     x=(d/b);
	     std::cout << s+x << std::endl;
	}
	return 0;
}
