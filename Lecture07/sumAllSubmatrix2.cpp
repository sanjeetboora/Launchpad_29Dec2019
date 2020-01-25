#include <iostream>
using namespace std;
void prefixComputation(int arr[10][10], int prefixMatrix[10][10], int r, int c){

	for (int i = 0; i < c; ++i)
	{
		prefixMatrix[0][i] = arr[0][i];
	}

	// columnwise sum
	for (int i = 1; i < r; ++i)
	{
		for (int j = 0; j < c; j++)
		{
			prefixMatrix[i][j] = prefixMatrix[i-1][j]+arr[i][j];
		}
	}


	// row-wise sum
	for (int i = 0; i < r; ++i)
	{
		for (int j = 1; j < c; j++)
		{
			prefixMatrix[i][j] += prefixMatrix[i][j-1];
		}
	}

}

int sumAllsubmatrix(int arr[10][10], int prefixMatrix[10][10], int r, int c){
	int sum =0;
	for (int topLefti = 0; topLefti < r; topLefti++)
	{
		for (int topLeftj = 0; topLeftj < c; topLeftj++)
		{
			//cout<<topLefti<<"  "<<topLeftj<<" -->";
			for (int bottomRighti = topLefti; bottomRighti <r; bottomRighti++)
			{
				for (int bottomRightj = topLeftj; bottomRightj <c; bottomRightj++)
				{
					//cout<<bottomRighti<<" "<<bottomRightj<<",";
					int subMatrixSum = prefixMatrix[bottomRighti][bottomRightj];
					if(topLefti > 0){
						subMatrixSum -= prefixMatrix[topLefti-1][bottomRightj];
					}
					if(topLeftj >0){
						subMatrixSum -= prefixMatrix[bottomRighti][topLeftj-1];
					}
					if(topLefti > 0 && topLeftj >0){
						subMatrixSum += prefixMatrix[topLefti-1][topLeftj-1];
					}
					cout<<subMatrixSum<<endl;
					sum += subMatrixSum;

				}
			}
			//cout<<endl;
		}
	}
	return sum;
}
int main(int argc, char const *argv[])
{	
	int arr[10][10] = {{1,1},
					 {1,1}};
	int prefixMatrix[10][10];

	int r =2, c =2;
	prefixComputation(arr, prefixMatrix, r, c);
	for (int i = 0; i < r; ++i)
	{
		for (int j = 0; j < c; j++)
		{
			cout<<prefixMatrix[i][j]<<", ";
		}
		cout<<endl;
	}
	int sum = sumAllsubmatrix(arr,prefixMatrix, r, c);
	cout<<sum<<endl;
	
	return 0;
}









