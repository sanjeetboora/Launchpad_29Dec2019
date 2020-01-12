#include <iostream>
using namespace std;

int x =50;

int fun(int a){
	//int n = 500;
	//cout<<n<<endl;
	//cout<<x<<endl;
}

int main(int argc, char const *argv[])
{
	
	int n = 5;
	//fun(n);
	int x = 90;
	cout<<"global: "<< ::x<<endl;
	//cout<<n<<endl;


	int i = 10;
	for (i = 0; i < 20; ++i)
	{
		cout<<i<<", ";
	}
	cout<<endl;
	cout<<i<<endl;



	return 0;
}










