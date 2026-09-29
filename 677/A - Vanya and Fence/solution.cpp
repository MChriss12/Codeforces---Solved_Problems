#include <iostream>
#include<cmath>
using namespace std;
 
int main() {
	int n, h;
	cin >> n >> h;
	int i;
	int v[1001];
	for (i = 1; i <= n; i++)
		cin >> v[i];
 
	for (i = 1; i <= n; i++) {
		if (v[i] > h)
			v[i] = 2;
		else
			v[i] = 1;
	}
 
	int S=0;
	for(i=1;i<=n;i++)
		S+=v[i];
	cout<<S;
 
 
	return 0;
}