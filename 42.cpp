/* Link for problem: https://www.spoj.com/problems/ADDREV/ */

#include <iostream>
#include <math.h>
using namespace std;

int reverse(int a) {
	int rev = 0, b = a, n = 0, i = 0;
	while (b / 10 != 0) {
		b = b / 10;
		n++;
	}
	while (a != 0) {
		int r = a / (int) pow (10, n);
		rev += r * (int)pow(10, i++);
		a = a % (int) pow (10, n--);
		
	}
	return rev;
}

void reverse_sum(int a, int b) {
	int sum = reverse(a) + reverse(b);
	cout << reverse(sum) << endl;
}

int main() {
	int N;
	int a[N];
	int b[N];
	cin >> N;
	for (int i = 0; i < N; i++) {
		
		cin >> a[i] >> b[i];
	}
	for (int i = 0; i < N; i++) {
		reverse_sum(a[i], b[i]);
	}
	return 0;
}
