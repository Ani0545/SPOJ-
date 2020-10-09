/* Link for problem: https://www.spoj.com/problems/ACPC10A/ /*

#include <iostream>
#include <vector>
using namespace std;

int main() {
	int a, b, c, l = 0;
	vector<int> A;
	vector<int> B;
	vector<int> C;
	cin >> a >> b >> c;
	while (!(a ==0 && b == 0 && c == 0)) {
		A.push_back(a);
		B.push_back(b);
		C.push_back(c);
		l++;
		cin >> a >> b >> c;
	}
	for (int i = 0; i < l; i++) {
		if (B[i] - A[i] == C[i] - B[i]) {
			cout << "AP " << 2 * C[i] - B[i] << endl;
		}
		
		else if (C[i] / B[i] == B[i] / A[i]) {
			cout << "GP " << (int) C[i] * C[i] / B[i] << endl;
		}
	}
	return 0;
}
