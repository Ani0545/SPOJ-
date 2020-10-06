/* Link for problem : https://www.spoj.com/problems/FCTRL2 */

#include <iostream>
#include <string>

void display(int A[], int l) {
    for (int i = l - 1; i >= 0; i--) {
        std::cout << A[i];
    }
    std::cout << "\n";
}

void multiply(int A[], int* n, std::string m, int l) {
    int d = l - 1, j = 0, N = *n;
    int B[N];
    for (int i = 0; i  < N; i++) {
        B[i] = A[i];
        A[i] = 0;
    }
    do {
        if (*n < N + j)
            *n = *n + 1;

        int e = m[d] - '0';
        int carry = 0, product;
        for (int i = 0; i < N; i++) {
            product = B[i] * e + carry + A[i + j];
            A[i + j] = product % 10;
            carry = product / 10;
        }
        if (carry != 0) {
            A[*n] = carry;
            *n = *n + 1;

        }
        d--;
        j++;
    } while (d >= 0);
}


void factorial(int n) {
    int F[10000];
    F[0] = 1;
    for (int i = 1; i < 10000; i++) {
        F[i] = 0;
    }
    int len = 1;
    for (int i = 1; i <= n; i++) {
        std::string s = std::to_string(i);
        int l = s.length();
        multiply(F, &len, s, l);
    }
    display(F, len);
}

int main() {
	int T;
	std::cin >> T;
	int input[T];
	for (int i = 0; i < T; i++) {
		std::cin >> input[i	];
	}
    
    for (int i = 0; i < T; i++) {
    	factorial(input[i]);
    }
    
    return 0;
}
