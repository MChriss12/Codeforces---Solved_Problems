#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int n,i,v[101];
	double result=0.0;
 
	cin>>n;
	for(i=1;i<=n;i++)
		cin>>v[i];
 
	double S=0.0;
	for(i=1;i<=n;i++)
		S+=v[i];
 
	result=S/n;
 
 
	cout<<fixed<<setprecision(12)<<result;
 
	return 0;
}