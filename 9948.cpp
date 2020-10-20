/* Link: https://www.spoj.com/problems/WILLITST */

#include <iostream>
using namespace std;

/* The only step available to reduce a number is n->n/2 when n is even.
Clearly if n = 2^k, then n is repeatedly halved by this step until it equals 1. 
However the other step is n->3*(n + 1)
So if this step is carried out even once the new value is a multiple of 3. 
From there it can take either step but a it remains a multiple of 3.
Thus it can never reach the form 2^k, which means it will never reduce to 1.
*/

int main() {
	// your code goes here
	long long t;
	cin >> t;
	long long z = 1;
	while (z < t) {
		z = z * 2;
	}
	if (z == t) {
		cout << "TAK" << endl;
	}
	else {
		cout << "NIE" << endl;
	}
	
	return 0;
}
