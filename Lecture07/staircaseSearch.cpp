#include <iostream>
using namespace std;

bool staircaseSearch(int mat[10][10], int r, int c, int key){
	int i = 0, j = c-1;
	while(i < r && j >= 0){

		if(mat[i][j] == key){
			return true;
		}
		else if(key > mat[i][j]){
			i++;
		}
		else{
			j--;
		}
	}
	return false;
}

int main(int argc, char const *argv[])
{
	
	int mat[10][10] = {{1, 2, 3, 4}, 
						{11, 12, 13, 104}, 
						{21, 22, 23, 204}, 
						{31, 32, 33, 304}} ;
	int r, c, key;
	cin >> r >> c >> key;

	// // fill matrix
	// for (int i = 0; i < r; ++i)
	// {
	// 	for (int j = 0; j < c; j++)
	// 	{
	// 		mat[i][j] = (10 * i) + j + 1;
	// 	}
	// }
	//print matrix
	for (int i = 0; i < r; ++i)
	{
		for (int j = 0; j < c; j++)
		{
			cout << mat[i][j] << ", ";
		}
		cout << endl;
	}
	bool result = staircaseSearch(mat, r, c, key);
	if(result){
		cout<<key<<" found"<<endl;
	}else{
		cout<<key<<" not found"<<endl;
	}
	return 0;
}





