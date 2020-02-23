#include<iostream>
using namespace std;
int placePivot(int* arr, int start, int end) {

	int pivot = arr[end];
	int i = start - 1;
	for (int j = start; j < end; j++)
	{
		if (arr[j] <= pivot) {
			i++;
			swap(arr[j], arr[i]);
		}
	}
	i++;
	swap(arr[i], arr[end]); // placing pivot at it's right position
	return i;
}


int kSmallest(int* arr, int start, int end, int k) {
	if (start >= end) {
		return -1;
	}

	if (k > 0 and k <= end - start + 1 ) {
		int pivotIdx = placePivot(arr, start, end);

		if (pivotIdx ==  k - 1) {
			return arr[pivotIdx];
		}
		if (pivotIdx > k - 1) {
			return kSmallest(arr, start, pivotIdx - 1, k);
		}
		if (pivotIdx < k - 1) {
			return kSmallest(arr, pivotIdx + 1, end, k - 1 - pivotIdx);
		}

	}
	return -1;
}


int main(int argc, char const *argv[])
{
	int arr[10] = {5, 1, 2, 3, 9, 4};
	cout<<kSmallest(arr, 0, 5, 3)<<endl;
	for (int i = 0; i < 6; ++i)
	{
		cout << arr[i] << ", ";
	}
	cout << endl;

	return 0;
}










