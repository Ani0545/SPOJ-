/* Link: https://www.spoj.com/problems/BWIDOW */

#include <iostream>
using namespace std;

int main(void) {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int n;
		cin >> n;
		int r[n];
		int R[n];
		for (int j = 0; j < n; j++) {
			cin >> r[j];
			cin >> R[j];
		}
		int max_r = 0, index = -1, flag = 0;
		for (int j = 0; j < n; j++) {
			if (r[j] > max_r) {
				max_r = r[j];
				index = j;
			}
		}
		
		for (int j = 0; j < n; j++) {
			if (j != index && R[j] >= max_r) {
				flag = 1;
			}
		}
		
		if (flag == 0)
			cout << index + 1 << endl;
			
		else
			cout << -1 << endl;
	}
	return 0;
}
