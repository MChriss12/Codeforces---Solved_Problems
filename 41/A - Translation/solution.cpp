#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
using namespace std;
 
int main() {
	string s,t;
	cin>>s;
	cin>>t;
 
	reverse(t.begin(),t.end());
 
	int res = s.compare(t);
 
	if(res==0)
		cout<<"YES";
	else
		cout<<"NO";
 
 
 
	return 0;
 
}