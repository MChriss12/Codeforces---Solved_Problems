#include <iostream>
#include <algorithm>
using namespace std;
int i;
int main()
{
    string s;
    int nr=1;
 
    cin>>s;
    sort(s.begin(), s.end());
    char elem=s[0];
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]!=elem)
        {
            elem=s[i];
            nr++;
        }
    }
    if(nr%2==0)
        cout<<"CHAT WITH HER!";
    else
        cout<<"IGNORE HIM!";
 
 
 
 
    return 0;
}