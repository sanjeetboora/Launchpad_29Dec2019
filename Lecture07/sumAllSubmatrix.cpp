#include <iostream>
using namespace std;


int sumAllsubmatrix(int arr[10][10], int r, int c){
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
					for (int i = topLefti; i <= bottomRighti; ++i)
					{
						for (int j = topLeftj; j <= bottomRightj; j++)
						{
							sum += arr[i][j];
						}
					}
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

	int r =2, c =2;

	int sum = sumAllsubmatrix(arr, r, c);
	cout<<sum<<endl;
	
	return 0;
}









