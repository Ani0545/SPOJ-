/* Link for problem: https://www.spoj.com/problems/SAMER08F/ 

This problem can be easily solved if we know that:
i. No. of squares of size m in a n*n grid = (n - m + 1) ^ 2
ii. 1^2 + 2^2 + ... + n ^ 2 = (n * (n + 1) * (2 * n + 1)) / 6 = Total squares in n*n grid

*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> N;
	int l = 0;
	int n;
	cin >> n;

	while(n != 0) {
		N.push_back(n);
		l++;
		cin >> n;
	}

	for(int i = 0; i < l; i++) {
		cout << (N[i] * (N[i] + 1) * (2 * N[i] + 1)) / 6 << endl;
	}

	return 0;
}


