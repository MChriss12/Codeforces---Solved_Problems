#include <iostream>
using namespace std;
int n,i,k;
int a[101];
int main()
{
    cin>>n>>k;
    for(i=1;i<=n;i++)
        cin>>a[i];
    int nr=0;
 
    for(i=1;i<=n;i++){
        if(a[i]>=a[k]&&a[i]>0)
            nr++;
    }
    cout<<nr;
 
 
    return 0;
}