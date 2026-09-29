#include <iostream>
#include <cstring>
using namespace std;
int n,i;
string s;
int main()
{
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>s;
        if(s.length()>10)
        {
            cout<<s[0]<<s.length()-2<<s[s.length()-1]<<endl;
        }
        else
        {
            cout<<s;
            cout<<endl;
        }
    }
 
 
 
    return 0;
}