#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{					
	int arr[3][4];
	int r =4, c =5;
	int **arrd = new int*[r];
	for (int i = 0; i < r; ++i)
	{
		arrd[i] = new int[c];
	}
	for (int i = 0; i < r; ++i)
	{
		for (int j = 0; j < c; ++j)
		{
			arrd[i][j] = (10*i) + j +1;
		}
	}
	//print
	for (int i = 0; i < r; ++i)
	{
		for (int j = 0; j < c; ++j)
		{
			cout<<arrd[i][j]<<", ";
		}
		cout<<endl;
	}

	return 0;
}











