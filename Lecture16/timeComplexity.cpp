#include<iostream>
#include<ctime>
using namespace std;
void merge(int* arr, int start, int mid, int end) {

	int i = start, j = mid + 1, k = 0;

	int length = end - start + 1;
	int temp[1000000] = {0};

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

void bubbleSort(int arr[10], int n){

	for (int j = 0; j < n-1; j++)
	{	
		bool isSorted = true; //optimization
		for (int i = 0; i < n-j-1; ++i)
		{	
			if(arr[i] > arr[i+1]){
				swap(arr[i],arr[i+1]);
				isSorted = false;
			}
		}
	}
}

int main(int argc, char const *argv[])
{
	int arr[1000000];
	int n=100000;
	for (int i = 0; i < n; ++i)
	{
		arr[i] = n-i;
	}
	clock_t startTime = clock();
	bubbleSort(arr,n);
	clock_t endTime = clock();
	cout<<endTime - startTime<<endl;

	for (int i = 0; i < n; ++i)
	{
		arr[i] = n-i;
	}
	clock_t startTime1 = clock();
	//sort(arr,arr+n);
	mergeSort(arr, 0, n-1);
	clock_t endTime1 = clock();
	cout<<endTime1 - startTime1<<endl;



	
	cout<<endl;


	return 0;
}