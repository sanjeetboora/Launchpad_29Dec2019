#include <iostream>
using namespace std;

void wavePrintRow(int mat[10][10], int r, int c){

	for (int i = 0; i < r; ++i)
	{
		if(i&1){ // odd
			for (int j = c-1; j >= 0; j--)
			{
				cout<<mat[i][j]<<", ";
			}
		}
		else{//even
			for (int j = 0; j < c; j++)
			{
				cout<<mat[i][j]<<", ";
			}
		}
		cout<<endl;
	}

}
int main(int argc, char const *argv[])
{
	int mat[10][10];
	int r,c;
	cin>>r>>c;
	// fill matrix
	for (int i = 0; i < r; ++i)
	{
		for (int j = 0; j < c; j++)
		{
			mat[i][j] = (10*i) + j+1;
		}
	}
	//print matrix
	for (int i = 0; i < r; ++i)
	{
		for (int j = 0; j < c; j++)
		{
			cout<<mat[i][j]<<", ";
		}
		cout<<endl;
	}

	wavePrintRow(mat, r, c);



	return 0;
}












