#include<iostream>
using namespace std;
int subarrays(int arr[10], int n){
	int maxSum = INT_MIN;
	int currSum = 0;
	int maxnum = INT_MIN; // to handle all negative numbers case
	for (int i = 0; i < n; ++i)
	{
		currSum = currSum + arr[i];
		if(currSum > maxSum){
			maxSum = currSum;
		}
		if(currSum < 0){
			currSum =0;
		}
		if(arr[i] > maxnum){ // to handle all negative numbers case
			maxnum = arr[i];
		}
		
	}
	if(maxnum < 0){
		maxSum = maxnum;
	}
	return maxSum;
}


int main(int argc, char const *argv[])
{

	//int arr[10] = {9, -17, 2, 5, 6};
	int arr[10] = {-9, -17, -2, -5, -6};
	int maxSum = subarrays(arr, 5);
	cout<<"maximum sum"<<maxSum<<endl;
	

	return 0;
}

