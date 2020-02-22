#include<iostream>
using namespace std;

int lastOcc(int* arr, int n, int key){
	int start = 0, end = n-1;
	int ans = -1;
	while(start <= end){
		int mid = start+ ((end - start)/2);
		if(arr[mid] == key){
			 ans = mid;
			 start = mid+1;
		}

		else if(arr[mid] < key){//right half
			start = mid+1;
		}
		else{ // left half
			end = mid-1;
		}
	}
	return ans;
}


int main(int argc, char const *argv[])
{
	int arr[10] = {1,2,3,3,3,3,4,4,5};
	int key = 3;
	int idx = lastOcc(arr, 9, key);

	if(idx < 0){
		cout<<key<<" not found"<<endl;
	}
	else{
		cout<<key<<" found at "<<idx<<endl;
	}

	return 0;
}
// H.W -> first occurrence
// H.W -> first occurrence recursive
// H.W -> last occurrence recursive

















