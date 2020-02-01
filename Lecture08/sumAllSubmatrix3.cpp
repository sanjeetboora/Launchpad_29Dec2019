#include <iostream>
using namespace std;

int sumAllsubmatrix(int arr[10][10], int r, int c){
	int sum =0;
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			// cell -> i,j
			int topLeft = (i+1)* (j+1);
			int bottomRight = (r-i)* (c-j);
			int cellContribution = topLeft*bottomRight*arr[i][j];
			sum+=cellContribution;
		}
	}
	return sum;
}
int main(int argc, char const *argv[])
{	
	int arr[10][10] = {{1,1},
					 {1,1}};
	int r =2, c =2;
	int sum = sumAllsubmatrix(arr, r, c);
	cout<<sum<<endl;
	
	return 0;
}









