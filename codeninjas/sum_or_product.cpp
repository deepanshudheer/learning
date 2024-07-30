#include <bits/stdc++.h> 

long long int fact(int n) {
	if (n == 0 || n == 1) {
		return 1;
	} else {
		return n * fact(n-1) % 1000000007;
	}
}

long long int sumOrProduct(long long int n, long long int q)
{

	// Write your code here.
	if (q == 1) {
		return n * (n + 1) / 2;
	} else if (q == 2){
		fact(n);
	}
}
