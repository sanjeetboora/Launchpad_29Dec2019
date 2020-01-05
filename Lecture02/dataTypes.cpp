#include <iostream>
using namespace std;

int main()
{
	int a = 5;

	signed int num1 = 8;
	unsigned int num2 = 10;

	int negNumber = -5;
	float b = 6.7;
	double d = 6.7;
	bool c = true;
	char ch = 'a';
	cout << "int " << sizeof(a) << endl;
	cout << "float " << sizeof(b) << endl;
	cout << "bool " << sizeof(c) << endl;
	cout << "double " << sizeof(d) << endl;
	cout << "char " << sizeof(ch) << endl;


	// if(true){
	// 	cout<<"true"<<endl;
	// }
	// else{
	// 	cout<<"false"<<endl;
	// }

	// if(0){
	// 	cout<<"true"<<endl;
	// }
	// else{
	// 	cout<<"false"<<endl;
	// }



	if (-5) {
		cout << "true" << endl;
	}
	else {
		cout << "false" << endl;
	}

	cout << true << endl;
	cout << false << endl;


	return 0;
}