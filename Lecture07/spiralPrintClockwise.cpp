#include <iostream>
using namespace std;

void spiralPrintClockwise(int mat[10][10], int r, int c) {
	int startRow = 0, startCol = 0, endCol = c - 1, endRow = r - 1;

	while (startRow <= endRow && startCol <= endCol) {

		//print StartRow
		int i = startCol;
		while (i <= endCol) {
			cout << mat[startRow][i] << ", ";
			i++;
		}
		startRow++;

		//print endCol
		i = startRow;
		while (i <= endRow) {
			cout << mat[i][endCol] << ", ";
			i++;
		}
		endCol--;

		//print endRow
		if(endRow >= startRow){
			i = endCol;
			while (i >= startCol) {
				cout << mat[endRow][i] << ", ";
				i--;
			}
			endRow--;
		}
		

		//print startCol
		if(endCol>=startCol){
			i = endRow;
			while (i >= startRow) {
				cout << mat[i][startCol] << ", ";
				i--;
			}
			startCol++;
		}
	}

}
int main(int argc, char const *argv[])
{
	int mat[10][10];
	int r, c;
	cin >> r >> c;
	// fill matrix
	for (int i = 0; i < r; ++i)
	{
		for (int j = 0; j < c; j++)
		{
			mat[i][j] = (10 * i) + j + 1;
		}
	}
	//print matrix
	for (int i = 0; i < r; ++i)
	{
		for (int j = 0; j < c; j++)
		{
			cout << mat[i][j] << ", ";
		}
		cout << endl;
	}

	spiralPrintClockwise(mat, r, c);



	return 0;
}












