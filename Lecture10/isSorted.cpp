#include <iostream>
using namespace std;

bool isSorted(int* arr, int n){
	if(n==1){
		return true;
	}

	if(arr[0] <= arr[1] && isSorted(arr+1, n-1)){
		return true;
	}
	return false;
}

int main(int argc, char const *argv[])
{
	int arr[10] = {1,12,23,44};

	int n =4;
	if(isSorted(arr, n)){
		cout<<"array is sorted"<<endl;
	}
	else{
		cout<<"array is noti sorted"<<endl;
	}

	return 0;
}












