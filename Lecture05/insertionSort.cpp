#include<iostream>
using namespace std;

void insertionSort(int arr[10], int n){

	int i, key, j;

	for (int i = 1; i <= n-1 ; ++i)
	{
		key = arr[i];
		j = i-1;

		while( j >= 0 && arr[j] > key ){
			arr[j+1] = arr[j];
			j--;
		}

		arr[j+1] = key;
	}

}
int main(int argc, char const *argv[])
{
	int arr[10] = {5,9,1,3,2,6};
	insertionSort(arr,6);	
	for (int i = 0; i < 6; ++i)
	{
		cout<<arr[i]<<", ";
	}
	cout<<endl;


	return 0;
}