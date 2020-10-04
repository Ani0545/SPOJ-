/* Link for problem: https://www.spoj.com/problems/PRIME1/ */

#include <iostream>
using namespace std;

bool isPrime(int n) 
{ 
    // Corner cases 
    if (n <= 1)  return false; 
    if (n <= 3)  return true; 
  
    // This is checked so that we can skip  
    // middle five numbers in below loop 
    if (n%2 == 0 || n%3 == 0) return false; 
  
    for (int i=5; i*i<=n; i=i+6) 
        if (n%i == 0 || n%(i+2) == 0) 
           return false; 
  
    return true; 
} 

void primeGenerate(int l, int u) {
	for (int i = l; i <= u; i++) {
		if (isPrime(i)) {
			cout << i << endl;
		}
	}
	
	cout << endl;
}

int main() {
	std::ios::sync_with_stdio(false);
	int N;
	cin >> N;
	int l[N];
	int u[N];
	for (int i = 0; i < N; i++) {
		cin >> l[i] >> u[i];
	}
	for (int i = 0; i < N; i++) {
		primeGenerate(l[i], u[i]);
		
	}
	return 0;
}
