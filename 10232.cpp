/* Link: https://www.spoj.com/problems/AMR11E */

#include <iostream>
#include <bits/stdc++.h> 
using namespace std; 
  
bool isPrime(int n) 
{ 
    // Corner cases 
    if (n <= 1) 
        return false; 
    if (n <= 3) 
        return true; 
  
    // This is checked so that we can skip 
    // middle five numbers in below loop 
    if (n % 2 == 0 || n % 3 == 0) 
        return false; 
  
    for (int i = 5; i * i <= n; i = i + 6) 
        if (n % i == 0 || n % (i + 2) == 0) 
            return false; 
  
    return true; 
} 

int distinctPrimes(int n)
{
	int num = 0;
	for (int i = 2; i < n; i++)
	{
		if (isPrime(i) && n % i == 0)
			num++;
	}
	return num;
}

void  fillDistinctPrimes(int* A, int n)
{
	int i = 0, j = 30;
	while (i < n)
	{
		if (distinctPrimes(j) >= 3) 
			
			A[i++] = j;
	
		j++;
	}
}
  

int main() 
{ 
    int t, max = 0;
    cin >> t;

    int N[t];

    for (int i = 0; i < t; i++) 
    {
    	cin >> N[i];
    	if (max < N[i])
    		max = N[i];
    } 

    int* LuckyNumbers = new int[max];
    
    

    fillDistinctPrimes(LuckyNumbers, max);

    for (int i = 0; i < t; i++)
    {
    	cout << LuckyNumbers[N[i] - 1] << endl;
    }
    
    return 0; 
} 
