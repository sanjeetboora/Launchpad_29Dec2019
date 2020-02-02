#include <bits/stdc++.h>
using namespace std;
int factorial(int n){
	//base case
	if(n==0){
		return 1;
	}

	int fact = n * factorial(n-1);//recursive call
	return fact;
}


int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int result = factorial(n);
	cout<<result<<endl;
	return 0;
}

















