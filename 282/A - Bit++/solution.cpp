#include <iostream>
#include <string>
using namespace std;
int n,i,x=0;
string s;
int main()
{
    cin>>n;
    while(n--){
        cin>>s;
        if(s[1]=='+')
            x++;
        else
            x--;
    }
    cout<<x<<endl;
    
 
 
    return 0;
}