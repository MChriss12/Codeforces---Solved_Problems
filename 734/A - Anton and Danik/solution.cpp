#include <iostream>
#include <string>
using namespace std;
 
int main() {
	int n;
	cin >> n;
	string s;
	cin >> s;
	int nr_a = 0;
	int nr_d = 0;
 
	for (int i = 0; i <= s.length()-1; i++)
		if (s[i] == 'A')
			nr_a++;
		else
			nr_d++;
 
	if (nr_a > nr_d)
		cout << "Anton";
 
	if (nr_a < nr_d)
		cout << "Danik";
 
	if (nr_a == nr_d)
		cout << "Friendship";
 
	return 0;
 
}