/* Link for problem: https://www.spoj.com/problems/FCTRL/ */

#include <iostream>
#include <math.h>
using namespace std;


int Z(long long n) {
	
	int sum = 0, c = 0, i = 1;
	/* Applying Legendre's Theorem - The Prime Factorization of Factorials.
	We need to find the min(prime fact of 2 in n!, prime fact of 5 in n!) which always comes out to be that of 5 */
	do {
		c = (int) floor((double)n / pow(5, i++));
		sum += c;
	} while(c != 0);
	
	return sum;
	
}

int main() {
	std::ios::sync_with_stdio(false);
	int T;
	cin >> T;
	long long input[T];
	for (int i = 0; i < T; i++) {
		cin >> input[i];
	}
	for (int i = 0; i < T; i++) {
		cout << Z(input[i]) << endl;
	}
	
	return 0;
}
