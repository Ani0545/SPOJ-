/* Link: https://www.spoj.com/problems/NY10A/ */

#include <iostream>
#include <string.h>
using namespace std;

int main() {
	int p;
	string S[] = {"TTT", "TTH", "THT", "THH", "HTT", "HTH", "HHT", "HHH"};
	cin >> p;
	for (int i = 0; i < p; i++) {
		int n[] = {0, 0, 0, 0, 0, 0, 0, 0};
		string str;
		int m;
		cin >> m;
		cin >> str;
		for (int j = 0; j < 38; j++) {
			string s = str.substr(j, 3);
			
			for (int k = 0; k < 8; k++) {
				if (s == S[k])
					n[k]++;
			}
		}
		cout << m << " ";
		for (int k = 0; k < 8; k++)
			cout << n[k] << " ";
		cout << endl;
	}
	return 0;
}
