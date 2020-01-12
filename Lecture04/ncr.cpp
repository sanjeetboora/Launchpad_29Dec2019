#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int n = 5;
	int r = 2;

	int factN =1;
	// factorial of N;
	for (int i = 1; i <= n; ++i)
	{
		factN = factN*i;
	}
	int factR =1;
	// factorial of R;
	for (int i = 1; i <= r; ++i)
	{
		factR = factR*i;
	}
	int factNR =1;
	// factorial of N-R;
	for (int i = 1; i <= n-r; ++i)
	{
		factNR = factNR*i;
	}

	int ncr = factN /(factR*factNR);
	cout<<ncr<<endl;

	return 0;
}







