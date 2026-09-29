// 4027892   Jul 5, 2013 8:45:43 PM	fuwutu	 155A - I_love_%username%	 GNU C++0x	Accepted	15 ms	0 KB
#include <iostream>
 
using namespace std;
 
int main()
{
    int n, k, i, nr = 0, s = 0, rest;
 
    while (cin >> n >> k)
    {
        rest = 240 - k;
        nr = 0;
        s = 0;
 
        for (i = 1; i <= n; i++)
        {
            s += 5 * i;
 
            if (s > rest)
                break;
 
            nr++;
        }
    }
    cout << nr;
    return 0;
}