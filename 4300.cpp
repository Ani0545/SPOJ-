/* Link: https://www.spoj.com/problems/AE00 */
#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int i=1, j = 1, c = 0;
	while (i * i <= n) {
		for (int j = i; j * i <= n; j++) {
			if (i * j <= n) {
				c++;
			}
		}
		i++;
	}
	cout << c;
	return 0;
}
