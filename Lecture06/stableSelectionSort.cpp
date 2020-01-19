#include<iostream>
using namespace std;

void selectionSort(int arr[10], int n){

	for (int i = 0; i < n-1; ++i)
	{
		int minidx = i;
		for (int j = i+1; j <= n-1; j++)
		{
			if(arr[minidx] > arr[j]){
				minidx = j;
			}
		}
	//	swap(arr[i], arr[minidx]);
		int key = arr[minidx];
		for (int l = minidx-1; l >= i; l--)
		{
			arr[l+1] = arr[l];
		}
		arr[i] = key;
	}

}
int main(int argc, char const *argv[])
{
	int arr[10] = {5,9,1,3,2,6};
	selectionSort(arr,6);	
	for (int i = 0; i < 6; ++i)
	{
		cout<<arr[i]<<", ";
	}
	cout<<endl;


	return 0;
}