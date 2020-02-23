#include<iostream>
using namespace std;

int merge(int* arr, int start, int mid, int end) {

	int i = start, j = mid + 1, k = 0;
	int count =0;
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
			count  += (mid-i+1);
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
	return count;
}

int mergeSort( int* arr, int start, int end) {
	if (start == end) {
		return 0;
	}

	int mid = start + ((end - start) / 2);
	int count =0;
	//left half
	count += mergeSort(arr, start, mid);
	//right half
	count += mergeSort(arr, mid + 1, end);

	count += merge(arr, start, mid, end);
	return count;
}

int main(int argc, char const *argv[])
{

	//int arr[100] = {1, 3, 5, 7, 8, 2, 5, 9, 11, 12, 13};
	//merge( arr, 0, 4, 10);
	int arr[100] = {15,8,9,10,2,3,1};
	int inversions = mergeSort(arr, 0, 6);
	cout<<inversions<<endl;
	for (int i = 0; i < 7; ++i)
	{
		cout << arr[i] << ", ";
	}
	cout << endl;

	return 0;
}









