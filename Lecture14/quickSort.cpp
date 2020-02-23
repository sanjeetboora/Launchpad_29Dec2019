#include<iostream>
using namespace std;
int placePivot(int* arr, int start, int end){

	int pivot = arr[end];
	int i = start-1;
	for (int j = start; j < end; j++)
	{
		if(arr[j] <= pivot){
			i++;
			swap(arr[j], arr[i]);
		}
	}
	i++;
	swap(arr[i],arr[end]);// placing pivot at it's right position
	return i;
}


void quickSort(int* arr, int start, int end){
	if(start >= end){
		return;
	}

	int pivotIdx = placePivot(arr, start, end);

	quickSort(arr, start, pivotIdx -1);//left 
	quickSort(arr, pivotIdx+1, end);//right
}


int main(int argc, char const *argv[])
{	
	int arr[10] = {5,1,2,3,9,4};
	quickSort(arr, 0, 5);
	for (int i = 0; i < 6; ++i)
	{
		cout<<arr[i]<<", ";
	}
	cout<<endl;

	return 0;
}










