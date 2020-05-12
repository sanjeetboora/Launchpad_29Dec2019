#include<bits/stdc++.h>
using namespace std;


int lcs(string str1, string str2) {
	if (str1.length() == 0 or str2.length() == 0) {
		return 0;
	}

	if (str1[0] == str2[0]) {
		return 1 + lcs(str1.substr(1), str2.substr(1));
	}

	else {
		return max(lcs(str1.substr(1), str2), lcs(str1, str2.substr(1)));
	}

}

int dp[100][100];

int lcsTopDown(string s1, string s2) {
	if (s1.length() == 0 or s2.length() == 0) {
		return 0;
	}

	if (dp[s1.size()][s2.size()] != -1) {
		return dp[s1.size()][s2.size()];
	}
	int ans = 0;
	if (s1[0] == s2[0]) {
		ans =  1 + lcsTopDown(s1.substr(1), s2.substr(1));
	}

	else {
		ans =  max(lcsTopDown(s1.substr(1), s2), lcsTopDown(s1, s2.substr(1)));
	}

	dp[s1.size()][s2.size()] = ans;

	return ans;
}


int lcsBottomUp(string s1, string s2) {
	int dp[100][100] = {0};

	for (int i = 1; i <= s1.length(); ++i)
	{
		for (int j = 1; j <=  s2.length(); j++)
		{
			if (s1[i - 1] == s2[j - 1]) {
				dp[i][j] = 1 + dp[i - 1][j - 1];
			}
			else {
				dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]);
			}
		}
	}

	for (int i = 0; i <= s1.length(); ++i)
	{
		for (int j = 0; j <= s2.length(); ++j)
		{
			cout << dp[i][j] << ", ";
		}
		cout << endl;
	}

	return dp[s1.length()][s2.length()];
}




int main(int argc, char const *argv[])
{	string str1 = "abcdgh";
	string str2 = "cgjkhlo";
	cout << lcs(str1, str2) << endl;

	// for (int i = 0; i <= str1.length(); ++i)
	// {
	// 	for (int j = 0; j <= str2.length(); ++j)
	// 	{
	// 		dp[i][j] = -1;
	// 	}
	// }
	//cout << lcsTopDown(str1, str2) << endl;
	// for (int i = 0; i <= str1.length(); ++i)
	// {
	// 	for (int j = 0; j <= str2.length(); ++j)
	// 	{
	// 		cout << dp[i][j] << ", ";
	// 	}
	// 	cout << endl;
	// }



	cout << lcsBottomUp(str1, str2) << endl;



	return 0;
}












