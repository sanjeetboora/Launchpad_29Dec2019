#include <bits/stdc++.h>
using namespace std;

int minProduct(int* arr, int n) {
	int countOfZero = 0, negNumbers = 0, maxNegNumber = INT_MIN, minPosNumber = INT_MAX, totalProduct = 1;
	if (n == 1) {
		return arr[0];
	}
	for (int i = 0; i < n; ++i)
	{
		if (arr[i] == 0) {
			countOfZero++;
		}
		else {
			totalProduct *= arr[i];
			// if number is -ve
			if (arr[i] < 0) {
				negNumbers++;
				maxNegNumber = max(arr[i], maxNegNumber);
			}
			// if number is +ve
			else {
				minPosNumber = min(arr[i], minPosNumber);
			}
		}
	}

	if (negNumbers == 0) { // all positive no.s
		if (countOfZero > 0) { // zero exist
			return 0;
		}
		else { // zero doesn't exist
			return minPosNumber;
		}
	}
	else {
		if (negNumbers & 1) { //no. of neg numbers is odd
			return totalProduct;
		}
		else {
			return totalProduct / maxNegNumber;
		}
	}

}

int main(int argc, char const *argv[])
{
	int arr[10] = { -2, -3, -4, 0, 1, 2, 3};
	int n = 7;
	cout << minProduct(arr, n) << endl;
	return 0;
}












