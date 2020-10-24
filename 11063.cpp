/* Link: https://www.spoj.com/problems/AP2 */

#include <iostream>
using namespace std;

void AP(long long A, long long B, long long S) {

/* LOGIC 
a + 2d = A 				   	-> 3rd term
a + nd - 3d = B			   	-> 3rd last term
n/2 * (2a + (n - 1)d) = S	-> Sum of series	
A + B = 2a + (n - 1)d		-> ith term + (n - i)th term
n/2 = S / (A + B)			
n = 2S/(A + B)				-> no. of terms
B - A = (n - 5)d			
d = (B - A)/(n - 5)			-> common diff
a = A - 2d					-> first term
*/
	long long a, d, n;
	n = 2 * S / (A + B);
	d = (B - A) / (n - 5);
	a = A - 2 * d;
	cout << n << endl;
	for (long long i = 0; i < n; i++) 
		cout << a + i * d << " ";
}

int main() {
	int t;
	long long A, B, S;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> A >> B >> S;
		AP(A, B, S);
		cout << endl;
	}

	return 0;
}
