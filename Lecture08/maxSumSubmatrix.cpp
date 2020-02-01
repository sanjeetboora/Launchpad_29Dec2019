#include <iostream>
using namespace std;

int maxSumSubmatrix(int arr[10][10], int r, int c){
	int sum = INT_MIN;

	//suffix sum matrix
	//row wise sum
	for (int i = r-1 ; i >= 0; i--)
	{
		for (int j = c-2; j >=0 ; j--)
		{
			arr[i][j] += arr[i][j+1];
		}
	}
	//column wise sum
	for (int i = r-2 ; i >= 0; i--)
	{
		for (int j = c-1; j >=0 ; j--)
		{
			arr[i][j] += arr[i+1][j];
		}
	}

	for (int i = 0; i < r; ++i)
	{
		for (int j = 0; j < c; j++)
		{
			sum = max(sum, arr[i][j]);
		}
	}
	return sum;
}
int main(int argc, char const *argv[])
{	
	int arr[10][10] = {{-12, -11, -10,-9},
					{-4, 0, 3, 4},
					{1, 2, 4, 5},
					{2, 3, 5, 6}};
	int r =4, c =4;
	int sum = maxSumSubmatrix(arr, r, c);
	cout<<sum<<endl;
	
	return 0;
}









