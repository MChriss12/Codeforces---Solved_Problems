#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int i;
int main()
{
 
    long long n;
    cin>>n;
    int nr=0;
    while(n!=0)
    {
        if(n%10==4||n%10==7)
            nr++;
        n/=10;
    }
    if(nr==4||nr==7)
        cout<<"YES";
    else
        cout<<"NO";
 
    return 0;
}