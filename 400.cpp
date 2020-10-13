/* Link: https://www.spoj.com/problems/TOANDFRO */
#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> N;
	vector<string> S;
	int n;
	string s;
	cin >> n;
	while (n != 0) {
		N.push_back(n);
		cin >> s;
		S.push_back(s);
		
		cin >> n;
		
	}
	for (int i = 0, l = N.size(); i < l; i++) {
		for (int j = 0; j < N[i]; j++) {
			int a = j, c = 0, d = N[i] - j;
			
			while (a < S[i].length()) {
				cout << S[i][a];
				if (c % 2 == 0) {
					a += d + d - 1;
				}
				else {
					a += j + j + 1;
				}
				c++;
			}
			
		
		}
		cout << endl;
	}
	return 0;
}
