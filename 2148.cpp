/*Link: https://www.spoj.com/problems/CANDY3 */

#include <iostream>
using namespace std;

int main() {
	int t;
	int n;
	int N[t];
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n;
		long long sum = 0;
		long long c;
		for (int j = 0; j < n; j++) {
			cin >> c;
			sum = (sum + c) % n;
		}
		
		if (sum == 0) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
		
	}
	
	return 0;
}
