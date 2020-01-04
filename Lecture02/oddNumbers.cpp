#include <iostream>
using namespace std;

int main()
{
	//1. initialization
	int num;
	cin>>num; //user input
	int a = 0;

	while(a <= num ){ //2. condition

		if(a%2 != 0){ // if a is odd
			cout<<a<<endl;
		}
		a = a+1; //3. processing

	}

	return 0;
}