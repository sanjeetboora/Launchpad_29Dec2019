#include <bits/stdc++.h>
using namespace std;

int countSetBitsRec(int n) {
	if (n == 0 || n == 1) {
		return n;
	}

	int count = 0;
	if (n % 2 == 0) {
		count = countSetBitsRec(n / 2);
	}
	else {
		count = 1 + countSetBitsRec(n / 2);
	}
	return count;

}
int memo[1000] = {0};
int countSetBitsTopDown(int n) {
	if (n == 0 || n == 1) {
		return n;
	}

	if (memo[n] != 0) {
		return memo[n];
	}

	int count = 0;
	if (n % 2 == 0) {
		count = countSetBitsRec(n / 2);
	}
	else {
		count = 1 + countSetBitsRec(n / 2);
	}
	memo[n] = count;
	return memo[n];

}


int countSetBitsBottomUp(int n) {
	int* dp = new int[n + 1];

	dp[0] = 0;
	dp[1] = 1;
	for (int i = 2; i <= n; ++i)
	{
		if (i % 2 == 0) {
			dp[i] = dp[i / 2];
		}
		else {
			dp[i] = 1 + dp[i / 2];
		}
	}
	return dp[n];
}


int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	cout << countSetBitsRec(n) << endl;
	cout << countSetBitsTopDown(n) << endl;
	cout << countSetBitsBottomUp(n) << endl;

	return 0;
}








