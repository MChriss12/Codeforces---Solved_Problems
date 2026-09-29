#include <iostream>
#include<cmath>
using namespace std;
 
int main() {
	int n, i, v[101];
	cin >> n;
	for (i = 1; i <= n; i++)
		cin >> v[i];
 
	int nr=0;
	for (i = 1; i <= n; i++) {
		if (v[i] == 1)
			nr++;
 
	}
 
	if (nr>=1)
		cout << "HARD";
	else
		cout << "EASY";
 
	return 0;
}