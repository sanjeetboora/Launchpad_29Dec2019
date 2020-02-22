#include<iostream>
using namespace std;

void merge(int* arr, int start, int mid, int end) {

	int i = start, j = mid + 1, k = 0;

	int length = end - start + 1;
	int temp[100] = {0};

	while (i <= mid && j <= end) {
		if (arr[i] < arr[j]) {
			temp[k] = arr[i];
			k++;
			i++;
		}
		else {
			temp[k] = arr[j];
			k++;
			j++;
		}
	}
	//copy remaining elements
	while (i <= mid) {
		temp[k] = arr[i];
		k++;
		i++;
	}
	while (j <= end) {
		temp[k] = arr[j];
		k++;
		j++;
	}

	//copy to actual array
	i = 0;
	while (start <= end) {
		arr[start] = temp[i];
		start++;
		i++;
	}
}

void mergeSort( int* arr, int start, int end) {
	if (start == end) {
		return;
	}

	int mid = start + ((end - start) / 2);
	//left half
	mergeSort(arr, start, mid);
	//right half
	mergeSort(arr, mid + 1, end);

	merge(arr, start, mid, end);

}

int main(int argc, char const *argv[])
{

	//int arr[100] = {1, 3, 5, 7, 8, 2, 5, 9, 11, 12, 13};
	//merge( arr, 0, 4, 10);
	int arr[100] = {1, 6, 5, 4, 10, 2, 18, 7};
	mergeSort(arr, 0, 7);
	for (int i = 0; i < 8; ++i)
	{
		cout << arr[i] << ", ";
	}
	cout << endl;

	return 0;
}









