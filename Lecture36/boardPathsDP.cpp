#include<iostream>
using namespace std;

int countBoardPathRec(int start, int end) {
	if (start == end) {
		return 1;
	}
	if (start > end) {
		return 0;
	}

	int count = 0;
	for (int dice = 1; dice <= 6; dice++)
	{
		count += countBoardPathRec(start + dice, end);
	}

	return count;

}


int countBoardPathTopDown(int start, int end, int* dp) {
	if (start == end) {
		return 1;
	}

	if (start > end) {
		return 0;
	}

	if (dp[start] != 0) {
		return dp[start];
	}

	int count = 0;
	for (int dice = 1; dice <= 6; dice++)
	{
		count += countBoardPathTopDown(start + dice, end, dp);
	}

	dp[start] = count;

	return count;
}


int countBoardPathBottomUp(int start, int end) {
	int dp[1000] = {0};

	dp[end] = 1; //base case

	for (int i = end - 1 ; i >= start; i--) {
		for (int dice = 1; dice <= 6 ; dice++)
		{
			if (i + dice <= end) {
				dp[i] = dp[i] + dp[i + dice];
			}
		}
	}
	for (int i = start; i <= end; ++i)
	{
		cout << dp[i] << ", ";
	}
	cout << endl;
	return dp[start];

}


int countBoardPathBottomUpLeftToRight(int start, int end) {
	int dp[1000] = {0};

	dp[start] = 1; //base case

	for (int i = start + 1 ; i <= end; i++) {
		for (int dice = 1; dice <= 6 ; dice++)
		{
			if (i - dice >= start) {
				dp[i] = dp[i] + dp[i - dice];
			}
		}
	}
	for (int i = start; i <= end; ++i)
	{
		cout << dp[i] << ", ";
	}
	cout << endl;
	return dp[end];
}


int countBoardPathBottomUpLeftToRightOptimize(int start, int end) {
	int dp[1000] = {0};
	int k = 6; //k is dice
	dp[start] = 1; //base case
	dp[start + 1] = 1;

	for (int i = start + 2; i <= start + k; i++) {
		dp[i] = 2 * dp[i - 1];
	}

	for (int i = start + k + 1 ; i <= end; i++) {

		dp[i] = 2 * dp[i - 1] - dp[i - k - 1];

	}
	for (int i = start; i <= end; ++i)
	{
		cout << dp[i] << ", ";
	}
	cout << endl;
	return dp[end];
}









int main(int argc, char const *argv[])
{	int n = 10;
	int dp[1000] = {0};
	cout << countBoardPathRec(0, n) << endl;
	cout << countBoardPathTopDown(0, n, dp) << endl;
	cout << countBoardPathBottomUp(0, n) << endl;
	cout << countBoardPathBottomUpLeftToRight(0, n) << endl;
	cout << countBoardPathBottomUpLeftToRightOptimize(0, n) << endl;




	return 0;
}












