#include<iostream>
using namespace std;

bool isSafe(int board[10][10], int i, int j, int row, int col) {
	if (board[i][j] == 0 && i < row && j < col ) {
		return true;
	}
	return false;

}

bool ratInMaze(int board[10][10], int i, int j, int row, int col) {

	if (i == row - 1 && j == col - 1) {
		return true;
	}
	bool horizontal = false, vertical = false;
	//horizonal
	if (isSafe(board, i, j + 1, row, col)) {
		horizontal = ratInMaze(board, i, j + 1, row, col);

	}
	//vertical
	if (isSafe(board, i + 1, j, row, col)) {
		vertical = 	ratInMaze(board, i + 1, j, row, col);
	}
	return horizontal or vertical;
}





int main(int argc, char const *argv[])
{
	int r = 5, c = 4;
	int board[10][10] = {{0, 0, 0, 1},
		{0, 1, 0, 1},
		{0, 0, 0, 1},
		{0, 0, 0, 1},
		{0, 1, 0, 0}
	};
	if(ratInMaze(board,0,0,r,c)){
		cout<<"path possible"<<endl;
	}
	else{
		cout<<"path not possible"<<endl;
	}

	return 0;
}

















