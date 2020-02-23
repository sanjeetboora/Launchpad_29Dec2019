#include<iostream>
using namespace std;

int findUnique(int* arr, int start, int end) {
	cout << start << " " << end << endl;
	if (start == end) {
		return start;
	}

	int mid = start + (end - start) / 2;
	if (mid & 1) { //mid is odd
		if (arr[mid + 1] == arr[mid]) {
			//unique is in left
			return findUnique(arr, start, mid - 1);
		}
		else {
			//unique is in right
			return findUnique(arr, mid + 1, end);
		}
	}
	else { //mid is even
		if (arr[mid + 1] == arr[mid]) {
			//unique is in right
			return findUnique(arr, mid + 2, end);
		}
		else {
			//unique is in left
			return findUnique(arr, start, mid);
		}


	}


}
int main(int argc, char const *argv[])
{	int arr[11] = {0,1, 1, 2, 2, 3, 3, 5, 5, 7, 7};
	int n = 11;

	int uniqueidx = findUnique(arr, 0, n - 1);
	cout << "unique element : " << arr[uniqueidx] << endl;
	return 0;
}




