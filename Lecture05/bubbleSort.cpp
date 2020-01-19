#include<iostream>
using namespace std;

void buubleSort(int arr[10], int n){

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

		if( isSorted == true){
			break;
		}
		for (int i = 0; i < 6; ++i)
		{
			cout<<arr[i]<<", ";
		}
		cout<<endl;

	}
}

int main(int argc, char const *argv[])
{
	int arr[10] = {5,9,1,3,2,6};
	buubleSort(arr,6);	
	// for (int i = 0; i < 6; ++i)
	// {
	// 	cout<<arr[i]<<", ";
	// }
	cout<<endl;


	return 0;
}