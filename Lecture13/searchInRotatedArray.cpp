#include<iostream>
using namespace std;

int searchinRotated(int* arr, int start, int end, int key) {
	if (start > end) {
		return -1;
	}
	int mid = start + ((end - start) / 2);

	if (arr[mid] == key) {
		return mid;
	}
	if (arr[mid] <=  arr[end]) {
		if (arr[mid] <= key && key <= arr[end]) {
			return searchinRotated(arr, mid + 1, end, key);
		}
		else {
			return searchinRotated(arr, start, mid - 1, key);
		}

	}

	else {
		if (arr[start] <= key && arr[mid] >= key) {
			return searchinRotated(arr, start, mid - 1, key);
		}
		else {
			return searchinRotated(arr, mid + 1, end, key);
		}

	}
}


int main(int argc, char const * argv[])
{
	int arr[20] = {6, 7, 8, 9, 10, 1, 2, 3, 4, 5};
	int key = 10;
	int idx = searchinRotated(arr, 0, 9, key);

	if (idx < 0) {
		cout << key << " not found" << endl;
	}
	else {
		cout << key << " found at " << idx << endl;
	}

	return 0;
}











