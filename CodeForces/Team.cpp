

/*
CodeForces
A - Team
*/


#include <iostream>

using namespace std;

int main()
{
    int n, a, b, c, sol(0);
    cin >> n;
    while (n--)
    {
        cin >> a >> b >> c;
        if (a + b + c >= 2)
        {
            sol += 1;
        }
    }
    cout << sol << endl;
    return 0;
}