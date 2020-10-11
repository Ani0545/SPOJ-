/* Link: https://www.spoj.com/problems/LASTDIG */
#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;
	int a[T];
	long long b[T];
	for (int i = 0; i < T; i++) {
		cin >> a[i] >> b[i];
	}
	int lastDig[10][4] = {{0, 0, 0, 0}, {1, 1, 1, 1}, {6, 2, 4, 8}, {1, 3, 9, 7}, {6, 4, 6, 4}, {5, 5, 5, 5}, {6, 6, 6, 6}, {1, 7, 9, 3}, {6, 8, 4, 2}, {1, 9, 1, 9}};
	for (int i = 0; i < T; i++) {
		int c = b[i] % 4;
		int d = a[i] % 10;
		if (b[i] == 0) {
			cout << "1" << endl;
		}
		else {
			cout << lastDig[d][c] << endl;
		}
		
		
	}
}
