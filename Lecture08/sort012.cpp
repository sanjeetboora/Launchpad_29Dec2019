#include <iostream>
using namespace std;

void dnfAlgo(int* arr, int n){
	int left = 0,mid =0, right = n-1;

	while(mid <= right){
		if(arr[mid] == 2){
			swap(arr[mid], arr[right]);
			right--;
		}
		else if(arr[mid] == 0){
			swap(arr[mid], arr[left]);
			left++;
			mid++;
		}
		else{
			mid++;
		}
		
	}

}

int main(int argc, char const *argv[])
{
	int n = 9;
	int arr[10] = {1,2,0,1,1,0,2,0,1};

	dnfAlgo(arr,n);
	for (int i = 0; i < n; ++i)
	{
		cout<<arr[i]<<", ";
	}
	cout<<endl;

	return 0;
}





