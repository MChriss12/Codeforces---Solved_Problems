#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int t;
    double n;
    long long int max1;
    cin >> t;
 
    while (t--)
    {
        max1 = 0;
        cin >> n;
        max1 = ceil((n / 2) - 1);
        cout << max1 << endl;
    }
 
    return 0;
}