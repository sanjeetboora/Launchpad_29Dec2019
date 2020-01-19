#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{	

	int arr[5][4] = {{1,11,111,1111},
					 {2,22,222,2222},
					 {3,33,333,3333},
					 {4,44,444,4444},
				     {5,55,555,5555}};

     // for (int row = 0; row < 5; row++)
     // {
     // 	for (int col = 0; col < 4; col++)
     // 	{
     // 		cout<<arr[row][col]<<", ";
     // 	}
     // 	cout<<endl; 
     // }

	for (int col = 0; col < 4; col++)
	{
		if(col %2 == 0){
			for (int row = 0; row < 5; row++)
			{
				cout<<arr[row][col]<<", ";
			}
		}
		else{
			for (int row = 4; row >= 0; row--)
			{
				cout<<arr[row][col]<<", ";
			}
		}
		cout<<endl;
	}

}












