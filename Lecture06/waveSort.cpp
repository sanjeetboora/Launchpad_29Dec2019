#include<iostream>
using namespace std;
void waveSort(int arr[10], int n){

	for (int i = 0; i < n; i = i+2)
	{	
		if(i < n-1 && arr[i] < arr[i+1]){
			swap(arr[i],arr[i+1]);
		}
		if( i > 0 && arr[i-1] > arr[i]){
			swap(arr[i], arr[i-1]);
		}
		
	}

}
int main(int argc, char const *argv[])
{
	int arr[10] = {5,6,7,2,9,10,3};
	int n =7;
	waveSort(arr, n);

	for (int i = 0; i < n; ++i)
	{
		cout<<arr[i]<<", ";
	}
	cout<<endl;




	return 0;
}