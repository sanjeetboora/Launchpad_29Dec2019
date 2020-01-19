#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{	//int n = 10;

	// int ar[100000];

	// int arr[5][2] = {{1,2},
	// 				 {3,4},
	// 				 {5,6}};

	//  for (int i = 0; i < 3; i++)
	//  {
	//  	for (int j = 0; j < 2; j++)
	//  	{
	//  		cout<<arr[i][j]<<", ";
	//  	}
	//  	cout<<endl;
	//  }
	//new

	int* n = new int(5);
	int* n1 = new int();
	
	int s;
	cin>>s;
	int* arrdynamic = new int[s];
	for (int i = 0; i < s; ++i)
	{
		arrdynamic[i] = i+i;
	}
	for (int i = 0; i < s; ++i)
	{
		cout<<arrdynamic[i]<<", ";
	}cout<<endl;

	delete n;
	delete []arrdynamic;

	return 0;
}












