/* Link: https://www.spoj.com/problems/PERMUT2/ */

#include <iostream>
using namespace std;

void adhocP(int A[], int n) {
	int flag = 0;
	for (int i = 0; i < n; i++) {
		
		if (A[A[i] - 1] != i + 1) {
			
			flag = 1;
		}
	}
	if (flag == 0) {
		cout << "ambiguous" << endl;
	}
	
	else {
		cout << "not ambiguous" << endl;
	}
	
}
int main() {
	int n;
	cin >> n;
	while (n != 0) {
		int A[n];
		for (int i = 0; i < n; i++) {
			cin >> A[i];
		}
		adhocP(A, n);
		cin >> n;
	}
	return 0;
}
