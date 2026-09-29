#include <iostream>
#include <algorithm>
using namespace std;
int i;
int main()
{
    string s;
 
    cin>>s;
    if(s[0]>='a'&&s[0]<='z')
       s[0]=s[0]-32;
 
    cout<<s;
 
 
 
 
    return 0;
}