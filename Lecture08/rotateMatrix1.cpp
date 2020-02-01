#include <iostream>
using namespace std;
void printMatrix(int arr[10][10],int r, int c){
	for (int i = 0; i < r; ++i)
	{
		for (int j = 0; j < c; ++j)
		{
			cout<<arr[i][j]<<", ";
		}
		cout<<endl;
	}
}

void rotateMatrix(int arr[10][10],int r, int c){
	printMatrix(arr, r, c);
	//reverse rows
	for (int i = 0; i < r; ++i)
	{
		int left =0, right = c-1;

		while(left<right){
			swap(arr[i][left], arr[i][right]);
			left++;
			right--;
		}
	}

	// swapping

	for (int i = 0; i < r; ++i)
	{
		for (int j = 0; j < i; j++)
		{
			swap(arr[i][j], arr[j][i]);
		}
	}

	printMatrix(arr, c, r);
}
int main(int argc, char const *argv[])
{	
	int r,c;
	cin>>r>>c;
	//int** arr = new int*[100];

	// for (int i = 0; i < 100; ++i)
	// {
	// 	arr[i] = new int [100];
	// }
	int arr[10][10] = {0};

	//fill matrix
	for (int i = 0; i < 10; ++i)
	{
		for (int j = 0; j < 10; ++j)
		{
			arr[i][j] = 0;
		}
	}
	for (int i = 0; i < r; ++i)
	{
		for (int j = 0; j < c; ++j)
		{
			arr[i][j] = (10*i) + j +1;
		}
	}

	rotateMatrix(arr, r, c);


	return 0;
}






