/* Link: https://www.spoj.com/problems/AMR12D/ */

#include <iostream>
#include <string>
using namespace std;

bool isPalin(string s) {
	int l = s.length();
	if (l == 0)
		return true;
	
	return (s[0] == s[l - 1]) && isPalin(s.substr(1, l - 2)); 
}

int main() {
	int t;
	cin >> t;
	string s;
	for (int i = 0; i < t; i++) {
		cin >> s;
		
		if (isPalin(s))
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}
