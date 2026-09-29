#include <iostream>
using namespace std;
int main()
{
    long long a, b, c, max1;
    while (cin >> a >> b >> c)
    {
        max1 = a + b + c;
        max1 = max(max1, (a * b * c));
        max1 = max(max1, a * (b + c));
        max1 = max(max1, (a + b) * c);
        max1 = max(max1, a + (b * c));
        max1 = max(max1, (a * b) + c);
        cout << max1 << endl;
    }
 
    return 0;
}