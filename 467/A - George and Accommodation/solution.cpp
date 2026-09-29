#include <iostream>
#include<cmath>
using namespace std;
 
int main() {
	int n, i,p,q;
 
	cin>>n;
	int nr=0;
	for(i=1;i<=n;i++){
		cin>>p>>q;
		if((q-p)>=2)
			nr++;
	}
	cout<<nr;
 
	return 0;
}