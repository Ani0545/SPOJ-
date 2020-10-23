/* Link: https://www.spoj.com/problems/CRDS */
#include <iostream>
using namespace std;

int main() {
	long long t;
	cin >> t;
	for (long long i = 0; i < t; i++) {
		long long n;
		cin >> n;
		long long A, B, C, D, N;
		A = n % 1000007;
		B = (n + 1) % 1000007;
		if (n % 2 == 0) {
			C = (n / 2) % 1000007;
			D = (n - 1) % 1000007;
		}
		else {
			C = n % 1000007;
			D = ((n - 1) / 2) % 1000007;
		}
		N = (((A * B) % 1000007) + ((C * D) % 1000007)) % 1000007;
		cout << N << endl;
	}
	return 0;
}
