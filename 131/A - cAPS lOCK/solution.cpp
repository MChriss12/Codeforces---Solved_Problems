#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int ok = 1, i;
    char u;
    string s;
 
    cin >> s;
 
    for (i = 1; i < s.length(); i++)
    {
        if (islower(s[i]))
            ok = 0;
    }
    if (ok == 1)
    {
        for (int j = 0; j < s.length(); j++)
        {
            if (islower(s[j]))
                u = toupper(s[j]);
            else
                u = tolower(s[j]);
 
            cout << u;
        }
    }
    else
        cout << s;
 
    return 0;
}