/* Link: https://www.spoj.com/problems/GIRLSNBS/ */

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	float m, n;
	cin >> m >> n;
	while (m != -1) {
		if (m == 0)
			cout << n;
			
		else if (n == 0)
			cout << m;
			
		else 
			if (m > n)
				cout << ceil(m / (n + 1));
				
			else
				cout << ceil(n / (m + 1));
			
		cout << "\n";
		
		cin >> m >> n;
	}
	
	return 0;
}
