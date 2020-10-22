/* LInk: https://www.spoj.com/problems/STAMPS */

#include <iostream>
#include <vector>
#include <bits/stdc++.h> 
using namespace std;

int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int stamps, friends;
		cin >> stamps >> friends;
		vector <int> v;
		for (int j = 0; j < friends; j++) {
			int k;
			cin >> k;
			v.push_back(k);
		}
		//Sorting in descending order
		sort(v.begin(), v.end(), greater<int>());
		int sum = 0, n = 0;
		while ((sum < stamps) && (n < friends)) {
			sum += v[n++];
		} 
		cout << "Scenario #" << (i + 1) << ":" << endl;
		if (sum < stamps) {
			cout << "impossible" << endl;
		}
		else {
			cout << n << endl;
		}
		cout << endl;
	}
	return 0;
}
