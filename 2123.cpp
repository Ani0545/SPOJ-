/* Link: https://www.spoj.com/problems/CANDY */

#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector <int> v;
	while (n != -1) {
		v.push_back(n);
		cin >> n;
	}
	int i = 0, l = v.size();
	while (i < l) {
		int sum = 0, num = 0;
		for (int j = i + 1; j <= i + v[i]; j++) {
			sum += v[j];
		}
		
		if (sum % v[i] == 0) {
			int avg = sum / v[i];
			for (int j = i + 1; j <= i + v[i]; j++) {
				if (v[j] > avg)
					num += v[j] - avg;
			}
			cout << num << endl;
		}
		else {
			cout << -1 << endl;		
		}
		i += v[i] + 1;
	}
	return 0;
}
