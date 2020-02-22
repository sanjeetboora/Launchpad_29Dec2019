#include<iostream>
using namespace std;

int binarySearch(int* arr, int start, int end, int key){
	if(start > end){
		return -1; // not found
	}
	int mid = start+ ((end - start)/2);
	if(arr[mid] == key){//found
		return mid;
	}

	else if(arr[mid] <  key){// right half
		return binarySearch(arr, mid+1, end, key);
	}
	else{//left half
		return binarySearch(arr, start, mid-1, key);
	}

}


int main(int argc, char const *argv[])
{
	int arr[10] = {1,2,3,14,25,36,67,89,100};
	int key = 89;
	int n=9;
	int idx = binarySearch(arr, 0,n-1, key);

	if(idx < 0){
		cout<<key<<" not found"<<endl;
	}
	else{
		cout<<key<<" found at "<<idx<<endl;
	}

	return 0;
}


















