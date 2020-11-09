/* Link: https://www.spoj.com/problems/AMR10G/ */

#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n, k, a, diff, min;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n >> k;
		vector<int> v;
		for (int j = 0; j < n; j++) {
			cin >> a;
			v.push_back(a);
		}	
			sort(v.begin(), v.end());
			min = v[n - 1] - v[0];
			
			for (int j = 0; j < n - k + 1; j++) {
				diff = v[k - 1 + j] - v[j];
				if (diff < min) {
					min = diff;
				}
			}
			cout << min << endl;
		
		
	}
	return 0;
}
