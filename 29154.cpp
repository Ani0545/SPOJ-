/* Link: https://www.spoj.com/problems/ALCATRAZ1/ */

#include <iostream>
using namespace std;

void digitSum(string n) {
	int l = n.length(), sum = 0;
	for (int i = 0; i < l; i++) {
		sum += n[i] - '0';
	}
	cout << sum << endl;
	
}

int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		string n;
		cin >> n;
		digitSum(n);
	}
	return 0;
}
