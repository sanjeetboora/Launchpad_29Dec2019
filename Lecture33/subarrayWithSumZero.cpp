#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;
bool isSubarraySumZero(int* arr, int n) {
	unordered_map<int, int> mp;
	int prefixSum = 0;
	for (int i = 0; i < n; ++i)
	{
		prefixSum += arr[i];

		if (prefixSum == 0 or (mp.count(prefixSum) and mp[prefixSum] != i)) {
			cout << mp[prefixSum] + 1 << " " << i << endl;
			return true;
		}

		mp[prefixSum] = i;
		//	key -> prefixSum, value -> i

	}
	return false;
}


int main(int argc, char const *argv[])
{
	int n;
	n = 2;
//	int arr[10] = {3, 2, 4, -2, -2, -5};
	int arr[10] = {2, -2};

	if (isSubarraySumZero(arr, n)) {
		cout << "sum zero exists" << endl;
	} else {
		cout << "sum zero doesn't exists" << endl;
	}


	return 0;
}