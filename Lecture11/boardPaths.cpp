#include<iostream>
using namespace std;

int countBoardPath(int start, int end){
	if(start == end){
		return 1;
	}
	if(start > end){
		return 0;
	}

	int count =0;
	for (int dice = 1; dice <= 6; dice++)
	{
		 count += countBoardPath(start+dice,end);
	}

	return count;

}



int main(int argc, char const *argv[])
{	int n =3;
	cout<<countBoardPath(0,n)<<endl;
	
	return 0;
}

// H.w -> print all board paths