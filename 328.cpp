/* Link: https://www.spoj.com/problems/BISHOPS/ */

#include <iostream>
#include <vector>
using namespace std;

void subtract(int N[], int  l, int s) {
	int carry = 0;
	for (int i = 0; i < l; i++) {
		if (s > 0) {
			
			if (N[i] >= s) {
				N[i] -= s;
				
			}
			else {
				N[i] = N[i] + 10 - s;
				
				carry = 1;
			}
			s = 0;
		}
		else {
			if (carry == 0)
				break;
			else {
				if (N[i] == 0) {
					N[i] = 9;
					carry = 1;
				}
				else {
					N[i] -= 1;
					break;
				}
				
			}
				
		}
		
	}
}

void multiply (int N[], int l, int m) {
	int carry = 0, product;
	for (int i = 0; i <= l; i++) {
		product = N[i] * m + carry;
		N[i] = product % 10;
		carry = product / 10;
	}
	
}

int main() {
	
	vector <string> S;
	string s;
	
	while (cin >> s) {
		S.push_back(s);
	
	}
	
	
	for (int k = 0; k < S.size(); k++){
		int l = S[k].length();
		int N[l + 1];
		for (int i = 0; i < l; i++) {
			N[i] = S[k][l - 1 - i] - '0';
			
		}
	
		
		N[l] = 0;
		if (l == 1 && N[0] == 1) {
			cout << 1 << endl;
		}
		else {
			subtract(N, l, 1);
			multiply(N, l, 2);
			if (N[l] > 0)
				l++;
		
			for (int j = l - 1; j >=0; j--) {
				cout << N[j];
			}
			cout << endl;
		}
		
	}
	
	
	return 0;
}
