/* Link: https://www.spoj.com/problems/NGM/ */

#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
  
  /* If the input is a multiple of 10, the second player wins because he can easily bring the number down to 10 eventually on the firsts player's turn,
  and whatever digit the first player subtracts, it would result in second player making the number 0 and winning. 
  If the number is not a multiple of 10, the first player wins it easliy by subtracting just that digit which makes the number a multiple of 10 
  */
  
	if (t % 10 == 0) 
		cout << "2";
	
	else 
		cout << "1" << endl << t % 10;
	
	return 0;
}
