#include<bits/stdc++.h>
using namespace std;


int rodCuttingRecursive(int* arr, int n) {
	if (n == 0) {
		return 0;
	}

	int totalprofit = 0;

	for (int i = 1; i <= n ; ++i)
	{
		int currProfit = arr[i] + rodCuttingRecursive(arr, n - i);
		totalprofit = max(currProfit, totalprofit);
	}
	return totalprofit;

}

int rodCuttingTopDown(int* arr, int n, int* dp) {
	if (n == 0) {
		return 0;
	}
	if (dp[n] != -1) {
		return dp[n];
	}

	int totalprofit = 0;

	for (int i = 1; i <= n ; ++i)
	{
		int currProfit = arr[i] + rodCuttingRecursive(arr, n - i);
		totalprofit = max(currProfit, totalprofit);
	}
	dp[n] = totalprofit;
	return dp[n];
}

int rodCuttingBottomUp(int* arr, int n) {
	int dp[100] = {0};

	for (int i = 1; i <= n; ++i)
	{
		int currProfit = 0;
		for (int cut = 1; cut <= i; ++cut)
		{
			currProfit = max(currProfit, arr[cut] + dp[i - cut]);
		}

// i->rowlength
// i=4;
// cut = 1;

// remaining length -> i-cut
// arr[cut] + dp[4-1]

		dp[i] = currProfit;
	}
	return dp[n];
}






int main(int argc, char const *argv[])
{	int n = 8;
	int arr[10] = {0, 1, 5, 8, 9, 10, 17, 17, 20};
	cout << rodCuttingRecursive(arr, n) << endl;

	int dp[100];
	for (int i = 0; i <= n; ++i)
	{
		dp[i] = -1;
	}
	cout << rodCuttingTopDown(arr, n, dp) << endl;

	cout << rodCuttingBottomUp(arr, n) << endl;

	return 0;
}












