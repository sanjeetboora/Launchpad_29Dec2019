#include <iostream>
using namespace std;

int fib(int n){
	if(n ==0 || n==1){
		return n;
	}
	int fibn = fib(n-1) + fib(n-2);
	return fibn; 
}


int main(int argc, char const *argv[])
{	int n;
	cin>>n;
	cout<<fib(n)<<endl;
	
	return 0;
}