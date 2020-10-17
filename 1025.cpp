/* Link: https://www.spoj.com/problems/FASHION/ */

#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int t;
	cin >> t;
	vector <int> v[t];
	int N[t];
	int n;
	for (int i = 0; i < t; i++) {
		cin >> N[i];
		for (int j = 0; j < 2 * N[i]; j++) {
			cin >> n;
			v[i].push_back(n);
		}
	}
	
	for (int i = 0; i < t; i++) {
		vector <int> A;
		vector <int> B;
		for (int j = 0; j < 2 * N[i]; j++) {
			if (j < N[i])
				A.push_back(v[i][j]);
			else
				B.push_back(v[i][j]);
		}
		
		sort(A.begin(), A.end());
		sort(B.begin(), B.end());
		int sum = 0;
		for (int j = 0; j < N[i]; j++) {
			sum += A[j] * B[j];
		}
		cout << sum << endl;
		
	}
	return 0;
}
