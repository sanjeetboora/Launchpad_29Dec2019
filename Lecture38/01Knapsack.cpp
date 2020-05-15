#include<iostream>
using namespace std;

int knapsack01Rec(int* wt, int* price, int n, int totalWeight) {
	if (n == 0) {
		return 0;
	}

	int inc = 0, exc = 0;
	int currWeight = wt[n - 1];
	if ((totalWeight - currWeight) >= 0) {
		inc = price[n - 1] + knapsack01Rec(wt, price, n - 1, totalWeight - currWeight);
	}
	exc = knapsack01Rec(wt, price, n - 1, totalWeight);

	return max(inc, exc);

}

int knapsack01BottomUpDP(int* wt, int* price, int n, int totalWeight) {

	int dp[n + 1][totalWeight + 1];

	if (n == 0) {
		return 0;
	}

	for (int i = 0; i <= n; ++i)
	{
		for (int j = 0; j <= totalWeight ; ++j)
		{
			if (i == 0 || j == 0) {
				dp[i][j] = 0;
			}
		}
	}


	for (int item = 1; item <= n; ++item)
	{
		for (int weight = 1; weight <= totalWeight; ++weight)
		{
			int inc = 0, exc = 0;

			exc = dp[item - 1][weight];
			int currWeight = wt[item - 1];
			if ((weight - currWeight ) >= 0) {
				inc = price[item - 1] + dp[item - 1][weight - currWeight];
			}

			dp[item][weight] = max(inc, exc);
		}
	}


	for (int i = 0; i <= n; ++i)
	{
		for (int j = 0; j <= totalWeight ; ++j)
		{
			cout << dp[i][j] << ", ";
		}
		cout << endl;
	}


	return dp[n][totalWeight];

}




int main(int argc, char const *argv[])
{
	int n = 3;
	int totalWeight = 5;
	int wt[10] = {1, 2, 3};
	int price[10] = {6, 10, 12};
	cout << knapsack01Rec(wt, price, n, totalWeight) << endl;
	cout << knapsack01BottomUpDP(wt, price, n, totalWeight) << endl;

	return 0;
}