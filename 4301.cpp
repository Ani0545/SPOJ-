/*Link: https://www.spoj.com/problems/AE1B */

#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int main(void) {
	int n, k, s;
	cin >> n >> k >> s;
	vector <int> v;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		v.push_back(a);
	}
	sort (v.begin(), v.end(), greater<int>());
	int sum = 0, num = 0;
	while (sum < k * s) {
		sum += v[num++];
		
	}
	
	cout << num;
	
	return 0;
}
