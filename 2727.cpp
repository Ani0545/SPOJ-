/* Link: https://www.spoj.com/problems/ARMY */

#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int ng, nm;
		cin >> ng >> nm;
		int g = 0, m = 0;
		int x;
		for (int j = 0; j < ng; j++) {
			cin >> x;
			if (x > g)
				g = x;
		}
		for (int j = 0; j < nm; j++) {
			cin >> x;
			if (x > m)
				m = x;
		}
		if (g < m)
			cout << "MechaGodzilla" << endl;
		else
			cout << "Godzilla" << endl;
	}
	return 0;
}
