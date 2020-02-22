#include<iostream>
using namespace std;

int pivotInRotated(int* arr, int start, int end) {
	if (start >= end) {
		return start;
	}
	int mid = start + ((end - start) / 2);
	// if pivot found
	if (start < mid && arr[mid - 1] > arr[mid]) {
		return mid;
	}
	if (end > mid && arr[mid + 1] < arr[mid]) {
		return mid + 1;
	}

	if (arr[mid] > arr[end]) { // right unsorted
		return pivotInRotated(arr, mid + 1, end);
	}
	else { // left unsorted
		return pivotInRotated(arr, start, mid - 1);
	}
}


int main(int argc, char const * argv[])
{
	int arr[20] = {1, 2, 3, 4, 5};
	int idx = pivotInRotated(arr, 0, 4);


	cout << "pivot found at " << idx << endl;


	return 0;
}











