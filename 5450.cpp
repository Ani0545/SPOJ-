/* Link: https://www.spoj.com/problems/ANARC09B/ */

#include <iostream>
using namespace std;

long long gcd(long long a, long long b) {
	if (b % a == 0) 
		return a;
	
	else
		if (a > b)
			return gcd(b, a);
		else
			return gcd(b % a, a);
}

long long min_squares(long long a, long long b) {
	// Answer is lcm/gcd = a*b / (gcd ^ 2)
	return a * b / (gcd(a, b) * gcd(a, b));
}

int main() {
	long long w, h;
	cin >> w >> h;
	while (w != 0) {
		cout << min_squares(w, h) << endl;
		cin >> w >> h;
	}
	return 0;
}
