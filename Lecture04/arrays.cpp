#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int arr[5];
	//int arr[5] ={0};
	//int arr[5] ={1};
	//int arr[5] ={1,2,3,4,5};
	//cout<<&arr<<endl;

	// for (int i = 0; i < 5; ++i)
	// {
	// 	arr[i] = i*i;
	// 	//cout<<&arr[i]<<endl;
	// }
	//user input
	for (int i = 0; i < 5; ++i)
	{
		cin>>arr[i];
	}
	for (int i = 0; i < 5; ++i)
	{
		cout<<arr[i]<<", ";
	}
	//cout<<arr[3]<<endl;

	return 0;
}