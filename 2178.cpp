*/ Link: https://www.spoj.com/problems/OFFSIDE */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int A, D;
	cin >> A >> D;
	while (A != 0 && D != 0) {
		vector <int> a;
		vector <int> d;
		for (int i = 0; i < A; i++) {
			int x;
			cin >> x;
			a.push_back(x);
		}
		for (int i = 0; i < D; i++) {
			int x;
			cin >> x;
			d.push_back(x);
		}
		sort(a.begin(), a.end());
		sort(d.begin(), d.end());
		
		if (a[0] >= d[1]) 
			cout << "N" << endl;
		else
			cout << "Y" << endl;
 		
 		cin >> A >> D;
		
	}
	return 0;
}
