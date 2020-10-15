/* Link: https://www.spoj.com/problems/EIGHTS */

/* Hint:
192^3 = _____888
(192 + x)^3 = ___888 + x^3 + 3*192*x*(x + 192)
let y =^3 + 3*192*x*(x + 192)
to have y end with 000, we need x^3 end with 000 ( x is any factor of 10)
and 3*192*x end with 000
smallest no. for that is 250.
Thus the kth number whose cube ends with 888 is 192 + 250 * (k - 1)
*/

#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	long long k[t];
	for (int i = 0; i < t; i++) {
		cin >> k[i];
	}
	for (int i = 0; i < t; i++) {
		long ans =  192 + (k[i] - 1) * 250;
		cout << ans << endl;
	}
	return 0;
}
