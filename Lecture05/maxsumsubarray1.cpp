#include<iostream>
using namespace std;

int subarrays(int arr[10], int n){
	int maxSum = INT_MIN;
	for (int i = 0; i < n; ++i)// start idx
	{
		for (int j = i; j < n; j++) // end idx
		{
			// for print
			int sum = 0;
			for (int k = i; k <= j; k++)
			{
				cout<<arr[k]<<", ";
				sum += arr[k];
			}
			cout<< "----->"<<sum;
			cout<<endl;

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








