#include<iostream>
using namespace std;

int binarySearch(int* arr, int n, int key){
	int start = 0, end = n-1;

	while(start <= end){
		//int mid = (start+end)/2 don't use this
		//int mid = start+ ((end - start+1)/2);// considering upper mid as mid
		int mid = start+ ((end - start)/2);// considering lower mid as mid

		if(arr[mid] == key){
			return mid;
		}

		else if(arr[mid] < key){//right half
			start = mid+1;
		}
		else{ // left half
			end = mid-1;
		}
	}
	return -1;
}


int main(int argc, char const *argv[])
{
	int arr[10] = {1,2,3,14,25,36,67,89,100};
	int key = 189;
	int idx = binarySearch(arr, 9, key);

	if(idx < 0){
		cout<<key<<" not found"<<endl;
	}
	else{
		cout<<key<<" found at "<<idx<<endl;
	}

	return 0;
}


















