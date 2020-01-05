
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	//bitwise operators
	//to check even or odd
	//int a =5;
	// int a = ~14;
	// int b =1;

	// if((a&b) == 0){
	// 	cout<< a<<" is even"<<endl;
	// }
	// else{
	// 	cout<< a<<" is odd"<<endl;
	// }

	// cout<<a<<endl;

	// int x = 3;

	// int leftShift = x<<2;
	// int rightShift = 16>>2;
	// cout<< leftShift<<" "<<rightShift<<endl;

	int num1 = 10;
	int num2 = 20;

	// int numpost = num1++;
	// int numpre = ++num2;

	// cout<<"numpost"<<numpost<<endl; // 10
	// cout<<"numpre"<<numpre<<endl;	//21
	cout << num1 << endl; // 11
	cout << num2 << endl; //21

//	cout<< num1 + num2++ <<endl; //32
//	cout<< num1 + ++num2 <<endl; //34

	//cout<<numpost + numpre<<endl;

	//cout<< ++num1 + num2++<<endl;//31
	//cout<< num1++ + ++num2<<endl;
	cout << num1-- + --num2 << endl;

	if (num1 > 0) {
		cout << num1 << " greater than 0" << endl;
	}
	else {
		cout << num1 << " smaller than 0" << endl;
	}
	//ternary operator
	num1 > 0 ? (cout << num1 << " greater than 0" << endl) : (cout << num1 << " smaller than 0" << endl);







	return 0;
}







