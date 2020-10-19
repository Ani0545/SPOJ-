/* Link: https://www.spoj.com/problems/HANGOVER/ */

#include <iostream>
using namespace std;

int main() {
	float t;
	cin >> t;
	while (t != 0.00) {
		float sum = 0.0;
		float n = 2.0;
		int i = 0;
		while (sum < t) {
			sum += 1 / n;
			n = n + 1.0;
			i++;
		}
		cout << i << " card(s)" << endl;
		cin >> t;
	}
	return 0;
}
