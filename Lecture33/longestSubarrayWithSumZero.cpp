#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;
int LongestSubarraySumZero(int* arr, int n) {
	unordered_map<int, int> mp;
	int prefixSum = 0, maxLength = 0;
	for (int i = 0; i < n; ++i)
	{
		prefixSum += arr[i];

		if (arr[i] == 0 and maxLength == 0) { //3,4,0,
			maxLength = 1;
		}
		if (prefixSum == 0) {
			maxLength = max(i + 1, maxLength);
		}
		if (mp.count(prefixSum)) {
			int currLength = i - mp[prefixSum];
			maxLength = max(maxLength, currLength);
		}
		else {
			mp[prefixSum] = i;
		}

	}
	return maxLength;
}


int main(int argc, char const *argv[])
{
	int n;
	n = 6;
	int arr[10] = {3, 2, 4, -2, -2, -5};
	//prefixArray 3,5,9,7,5,0
	//int arr[10] = {2, -2};
	int length = LongestSubarraySumZero(arr, n);
	cout << "max length of subarray with sum 0  is " << length << endl;


	return 0;
}