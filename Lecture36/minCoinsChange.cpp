#include<iostream>
using namespace std;

int minCoinsRec(int money, int* coins, int numCoins) {
	if (money == 0) {
		return 0;
	}

	int ans = INT_MAX;
	for (int coin = 0; coin < numCoins; coin++)
	{
		if (money - coins[coin] >= 0) {
			int count = minCoinsRec(money - coins[coin], coins, numCoins);
			ans = min(ans, count + 1);
		}
	}
	return ans;
}


int minCoinsRecTopDown(int money, int* coins, int numCoins, int* dp) {
	if (money == 0) {
		return 0;
	}

	if (dp[money] != 0) {
		return dp[money];
	}

	int ans = INT_MAX;
	for (int coin = 0; coin < numCoins; coin++)
	{
		if (money - coins[coin] >= 0) {
			int count = minCoinsRec(money - coins[coin], coins, numCoins);
			ans = min(ans, count + 1);
		}
	}
	dp[money] = ans;
	return ans;
}


int minCoinsRecBottomUp(int money,  int* coins, int numCoins) {
	int dp[1000] = {0};



	for (int i = 1 ; i <= money; i++) {

		dp[i] = INT_MAX;

		for (int coin = 0; coin < numCoins; coin++)
		{
			if (i - coins[coin] >= 0) {
				int reqCoins = dp[i - coins[coin]];
				dp[i] = min(dp[i], reqCoins + 1);
			}
		}
	}


	for (int i = 1; i <= money; ++i)
	{
		cout << dp[i] << ", ";
	}
	cout << endl;


	return dp[money];
}




int main(int argc, char const *argv[])
{	int n = 19;
	int coins[3] = {1, 6, 10};
	int dp[1000] = {0};
	cout << minCoinsRec(n, coins, 3) << endl;
	cout << minCoinsRecTopDown(n, coins, 3, dp) << endl;
	cout << minCoinsRecBottomUp(n, coins, 3) << endl;

	return 0;
}












