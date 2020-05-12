#include<bits/stdc++.h>
using namespace std;


int lis(int* arr, int n) {
	int dp[1000] = {0};

	for (int i = 0 ; i < n; i++) {
		dp[i] = 1;
	}

	int maxLength = 0;

	for (int i = 1; i < n ; ++i)
	{
		for (int j = 0; j < i; ++j)
		{
			if (arr[i] > arr[j]) {
				dp[i] = max(dp[i], dp[j] + 1);
			}
		}
		maxLength = max(maxLength, dp[i]);
	}


	for (int i = 0; i < n ; ++i)
	{
		cout << dp[i] << ", ";
	}
	cout << endl;

	return maxLength;

}


int longestIncSubseqOptimized(int *arr, int n) {
	vector<int> dp;

	dp.push_back(arr[0]);

	for (int i = 1; i < n; ++i)
	{
		int currEle = arr[i];

		auto idx = lower_bound(dp.begin(), dp.end(), currEle);

		if (idx == dp.end()) {
			dp.push_back(currEle);
		}
		else {
			*idx = currEle;
		}
	}

	for (int i = 0; i < dp.size(); ++i)
	{
		cout << dp[i] << ",";
	}
	cout << endl;
	return dp.size();

}



int main(int argc, char const *argv[])
{	int n = 6;
	int arr[100] = {50, 3, 10, 7, 40, 50};
	cout << lis(arr, n) << endl;
	cout << longestIncSubseqOptimized(arr, n) << endl;

	return 0;
}












