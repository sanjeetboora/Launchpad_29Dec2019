#include <iostream>
using namespace std;
int factorial(int);
int ncr(int,int);

// output data type(return type) // function_name// input - argumnets


int ncr(int n, int r){

	int factN = factorial(n);
	int factR = factorial(r);
	int factNR = factorial(n-r);
	int result = factN/(factR* factNR);
	return result; 
}
int factorial (int a){

	int factA =1;
	// factorial of N;
	for (int i = 1; i <= a; ++i)
	{
		factA = factA*i;
	}
	return factA;
}



int main(int argc, char const *argv[])
{
	
	int n = 5;
	int r =2;
	//int ans = factorial(n);
	int ans = ncr(n, r);
	cout<<ans<<endl;
	return 0;
}









