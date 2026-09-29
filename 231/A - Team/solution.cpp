#include <iostream>
using namespace std;
int n,i;
int P, V, T;
int nr=0;
int main()
{
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>P>>V>>T;
        if(P+V+T>=2)
            nr++;
    }
    cout<<nr;
 
    return 0;
}