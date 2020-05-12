#include<bits/stdc++.h>
using namespace std;

int dp[100][100][100];


int KorderedLcs(string s1, string s2, int i, int j, int k, int lenS1, int lenS2) {
	if (i == lenS1 or j == lenS2) {
		return 0;
	}

	if (dp[i][j][k] != -1) {
		return dp[i][j][k];
	}
	int ans = 0;
	if (s1[i] == s2[j]) {
		ans =  1 + KorderedLcs(s1, s2, i + 1, j + 1, k, lenS1, lenS2);
	}

	else {

		int case1 = KorderedLcs(s1, s2, i + 1, j, k, lenS1, lenS2);
		int case2 = KorderedLcs(s1, s2, i, j + 1, k, lenS1, lenS2);

		int case3 = -1;
		if (k > 0) {
			case3 = 1 + KorderedLcs(s1, s2, i + 1, j + 1, k - 1, lenS1, lenS2);
		}

		ans = max(case1, max(case2, case3));
	}

	dp[i][j][k] = ans;

	return ans;
}




int main(int argc, char const *argv[])
{	string str1 = "abcdgh";
	string str2 = "cgjkhlo";
//bjklmnh
	for (int i = 0; i < 100; ++i)
	{
		for (int j = 0; j < 100; ++j)
		{
			for (int k = 0; k < 100; ++k)
			{
				dp[i][j][k] = -1;
			}
		}

	}
	cout << KorderedLcs(str1, str2, 0, 0, 2, str1.length(), str2.length()) << endl;

	return 0;
}












