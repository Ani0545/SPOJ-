/* Link: https://www.spoj.com/problems/HPYNOS/ */

// All no. which ultimately reduce down to 1 and 7 will become 1 eventually while those which end up in any other number will never reduce down to 1
#include <iostream>
using namespace std;

int digitSquare(int n) {
	int sum = 0;
	while (n != 0) {
		int d = n % 10;
		sum += d * d;
		n = n / 10;
	}
	return sum;
}

int main() {
	int n, c = 0; 
	cin >> n;
	while (n >= 10) {
		n = digitSquare(n);
		c++;
	}
	
	if (n == 1)
		cout << c;
		
	else if (n == 7)
		cout << (c + 5);
		
	else
		cout << -1;
	return 0;
}
