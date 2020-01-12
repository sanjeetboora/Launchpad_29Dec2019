#include <iostream>
using namespace std;

void fun(int &a){
	a = a+10;
	cout<<a<<endl;
	cout<<"address a " <<&a <<endl;
}


int main(int argc, char const *argv[])
{
	int n = 10;
	fun(n);
	cout<<n<<endl;

	cout<<"address n " <<&n <<endl;
	return 0;
}










