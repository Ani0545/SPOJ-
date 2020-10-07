/* Link for problem: https://www.spoj.com/problems/NSTEPS/ */

/* This problem can be very easily solved if we classify the number into two groups of lines in which they lie:
i.  y = x
This line has the number series 0, 1, 4, 5, 8, 9, 12, 13, 16, 17, ...
Thus the numbers 4N if N is even and 4N + 1 if N is odd (N = 0, 1, 2, ..) lie in this line, such that they are mapped in the following way:
N = 2 * x, if x is even;
N = 2 * x - 1, if x is odd.

ii. y = x - 2
This line has the number series 2, 3, 6, 7, 10, 11, 14, 15, 18, ...
Thus the numbers 4N + 2 if N is even and 4N + 3 if N is odd (N = 0, 1, 2, ..) lie in this line, such that they are mapped in the following way:
N = 2 * x - 2, if x is even;
N = 2 * x - 3, if x is odd.

If y and x don't satisfy any of the 2 conditions, the numeber doesn't exist!

Now, the program is just a trivial implementation of this logic */

#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;
	int x[T], y[T];
	for (int i = 0; i < T; i++) {
		cin >> x[i] >> y[i];
	}
	for (int i = 0; i < T; i++) {
		if (y[i] == x[i]) {
			if (x[i] % 2 == 0)
				cout << 2 * x[i] << endl;
			else
				cout << 2 * x[i] - 1 << endl;
		}
		
		else if (y[i] == x[i] - 2) {
			if (x[i] % 2 == 0) 
				cout << 2 * x[i] - 2 << endl;
			else
				cout << 2 * x[i] - 3 << endl;
		}
		
		else
			cout << "No Number" << endl;
	}
	return 0;
}
