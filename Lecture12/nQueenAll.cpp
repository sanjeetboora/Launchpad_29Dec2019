#include<iostream>
using namespace std;

bool isSafe(int board[10][10], int i, int j, int N) {

	//left diagonal
	int r = i, c = j;

	while (r >= 0 && c >= 0) {
		if (board[r][c] == 1) {
			return false;
		}
		r--;
		c--;
	}
	//right diagonal
	r = i, c = j;

	while (r >= 0 && c < N) {
		if (board[r][c] == 1) {
			return false;
		}
		r--;
		c++;
	}

	//column
	r = i, c = j;

	while (r >= 0) {
		if (board[r][c] == 1) {
			return false;
		}
		r--;
	}
	//cell is safe
	return true;

}

bool nQueen(int board[10][10], int row, int N) {
	if (row == N) {
		// print board
		for (int i = 0; i < N; ++i)
		{
			for (int j = 0; j < N; j++)
			{
				cout << board[i][j] << ", ";
			}
			cout << endl;
		}
		return false;
	}
	for (int col = 0; col < N; col++)
	{
		if (isSafe(board, row, col, N)) {
			board[row][col] = 1;
			bool queenRakhDi =  nQueen(board, row + 1, N);
			if (queenRakhDi == true) {
				return true;
			}
			//backtrack
			board[row][col] = 0;
		}
	}
	return false;

}





int main(int argc, char const *argv[])
{
	int N =4;
	int board[10][10] ={0};
	nQueen(board, 0, N);	

	return 0;
}

















