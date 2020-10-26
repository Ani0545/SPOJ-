/* Link: https://www.spoj.com/problems/FENCE1/ */

#include <iostream>
#include <iomanip>  // To set precision
#include <math.h>    // To use pi
using namespace std;

#define PI M_PI  // naming M_PI (already defined) as PI

int main() {
	//Setting the output precision to 2 decimal places
  cout << std::fixed;
  cout << std::setprecision(2);
  
	int n;
	cin >> n;
	while (n != 0) {
    // Computing max possible area, which occurs when the fence is semicircular in shape
		float a = n * n / (2 * PI);
		cout << a << endl;
		cin >> n;
	}
	return 0;
}
