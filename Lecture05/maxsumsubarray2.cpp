#include<iostream>
using namespace std;

int subarrays(int arr[10], int n){
	int maxSum = INT_MIN;
	int preSum[10];
	preSum[0] = arr[0];
	for (int i = 1; i < n; ++i)
	{	
		preSum[i] = preSum[i-1] + arr[i];
		//cout<<preSum[i]<<", ";
	}
	for (int i = 0; i < n; ++i)// start idx
	{
		for (int j = i; j < n; j++) // end idx
		{
			// for print
			int sum = 0;
			if(i==0){
				sum = preSum[j];
			}
			else{
				sum = preSum[j] - preSum[i-1];
			}		
			
			if(sum>maxSum){
				maxSum = sum;
			}
		}
	}
	return maxSum;
}



int main(int argc, char const *argv[])
{

	int arr[10] = {1,3,-5,7,2};
	int maxSum = subarrays(arr, 5);
	cout<<"maximum sum"<<maxSum<<endl;
	

	return 0;
}








