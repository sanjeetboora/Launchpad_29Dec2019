#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;
int LongestSubseq(int* arr, int n) {
	unordered_map<int, int> mp;
	int maxLength = 0;
	for (int i = 0; i < n; ++i)
	{	mp[arr[i]] = i;
	}

	for (int i = 0; i < n; ++i)
	{
		if (mp.count(arr[i] - 1)) {
			continue;
		}
		else {
			int count = 0;
			int temp = arr[i];
			while (mp.count(temp)) {
				count++;
				temp++;
			}
			maxLength = max(maxLength, count);
		}
	}
	return maxLength;
}


int main(int argc, char const *argv[])
{
	int n;
	n = 11;
	int arr[11] = {8, 6, 3, 1, 2, 1, 9, 3, 4, 2, 6};
	//prefixArray 3,5,9,7,5,0
	//int arr[10] = {2, -2};
	int length = LongestSubseq(arr, n);
	cout << "max length of consecutive subseq " << length << endl;


	return 0;
}