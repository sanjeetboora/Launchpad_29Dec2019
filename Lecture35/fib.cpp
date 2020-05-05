#include <iostream>
using namespace std;

int fibRec(int n) {
	if (n == 0 || n == 1) {
		return n;
	}

	int nthFibonacci = fibRec(n - 1) + fibRec(n - 2);
	return nthFibonacci;
}

//memoization
int fibTopDownDP(int n, int* memo) {
	if (n == 0 || n == 1) {
		memo[n] = n;
		return memo[n];
	}
	// if nth fib is already calculated
	if (memo[n] != 0) {
		return memo[n];
	}

	int nthFibonacci = fibTopDownDP(n - 1, memo) + fibTopDownDP(n - 2, memo);
	memo[n] = nthFibonacci;

	return memo[n];
}


//bottomUpDp
int fibBottomUpDp(int n) {
	int* dp = new int[n + 1];
	dp[0] = 0;
	dp[1] = 1;
	for (int i = 2; i <= n; ++i)
	{
		dp[i] = dp[i - 1] + dp[i - 2];
	}
	return dp[n];
}

int fibBottomUpSpaceOptimized(int n) {
	if (n == 0 || n == 1) {
		return n;
	}
	int a = 0;
	int b = 1;
	int c;
	for (int i = 2; i <= n ; ++i)
	{
		c = a + b;
		a = b;
		b = c;
	}
	return c;
}




int main(int argc, char const *argv[])
{

	int n;
	cin >> n;
	cout << fibRec(n) << endl;
	int memo[1000] = {0};
	cout << fibTopDownDP(n, memo) << endl;
	for (int i = 0; i <= n; ++i)
	{
		cout << memo[i] << ", ";
	} cout << endl;

	cout << fibBottomUpDp(n) << endl;

	return 0;
}









