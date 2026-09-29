#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    string s;
    int S = 0;
 
    int n;
    cin >> n;
 
    for (int i = 1; i <= n; i++)
    {
        cin >> s;
        if (s[0] == 'T')
            S += 4;
        else if (s[0] == 'C')
            S += 6;
        else if (s[0] == 'O')
            S += 8;
        else if (s[0] == 'D')
            S += 12;
        else
            S += 20;
    }
    cout << S;
 
    return 0;
}