#include<iostream>
using namespace std;

void buubleSortRec(int* arr, int n){
	if(n == 0){
		return;
	}
	
	for (int i = 0; i < n-1; ++i)
	{	
		if(arr[i] > arr[i+1]){
			swap(arr[i],arr[i+1]);
		}
	}
	buubleSortRec(arr, n-1);
	
}
void buubleSortRec2(int* arr, int n, int i){
	if(n == 0){
		return;
	}

	if(i == n-1){
		buubleSortRec2(arr, n-1, 0);
		return;
	}

	if(arr[i] > arr[i+1]){
		swap(arr[i],arr[i+1]);
	}

	buubleSortRec2(arr, n, i+1);
	
}


void buubleSort(int arr[10], int n){

	for (int j = 0; j < n-1; j++)
	{	
		for (int i = 0; i < n-j-1; ++i)
		{	
			if(arr[i] > arr[i+1]){
				swap(arr[i],arr[i+1]);
			}
		}
	}
}

int main(int argc, char const *argv[])
{
	int arr[10] = {5,9,1,3,2,6};
	//buubleSort(arr,6);	
	//buubleSortRec(arr,6);	
	buubleSortRec2(arr,6,0);
	for (int i = 0; i < 6; ++i)
	{
		cout<<arr[i]<<", ";
	}
	cout<<endl;


	return 0;
}





