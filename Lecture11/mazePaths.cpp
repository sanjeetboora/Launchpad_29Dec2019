#include<iostream>
using namespace std;

void printMazePaths(int startRow, int startCol, int endRow, int endCol, string output){

	if(startRow == endRow && startCol == endCol){
		cout<<output<<endl;
		return;
	}
	if(startRow>endRow || startCol > endCol){
		return;
	}

	// horizontal
	printMazePaths(startRow, startCol+1, endRow, endCol, output+"H");
	//vertical
	printMazePaths(startRow+1, startCol, endRow, endCol, output+"V");
	
}

int main(int argc, char const *argv[])
{	int endrow, endcol;
	cin>>endrow>>endcol;
	printMazePaths(0,0,endrow,endcol, "");
	
	return 0;
}

// H.w -> count all maze paths
// H.w -> count and print all maze paths where you can move diagonally too 

