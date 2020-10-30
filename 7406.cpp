/* Link: https://www.spoj.com/problems/BEENUMS/ */

#include <iostream>
using namespace std;

// Beehive numbers belong to the series: 1 + 6 + 12 + 18 + ..... e.g. 1, 7, 19, 37

bool isBeehive(int n) {
	int num = 1, i = 1;
	while (num < n) {
		num += 6 * i++;
	}
	
	if (num == n)
		return true;
	else
		return false;
}

int main() {
	int n;
	cin >> n;
	while (n != -1) {
		if (isBeehive(n))
			cout << "Y" << endl;
		else
			cout << "N" << endl;
		cin >> n;
	}
	return 0;
}
