#include <bits/stdc++.h>
using namespace std;

int factorial(int num) {
	int result = 1;

	while (num > 0) {
		result = result * num;
		num--;
	}
	//cout<<result<<endl;
	return result;
}


int main(int argc, char const *argv[])
{

	int N = 5;
	int fact = factorial(N);
	cout << fact << endl;

	return 0;
}