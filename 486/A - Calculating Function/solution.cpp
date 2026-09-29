#include <bits/stdc++.h>
using namespace std;
 
int main() {
	long long n,S=0;
 
	cin >> n;
	if(n%2==0)
		S+=n/2;
	else
		S=((n+1)/2)*(-1);
 
	cout<<S;
 
	return 0;
}