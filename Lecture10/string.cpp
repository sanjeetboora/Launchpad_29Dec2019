#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	string str1 = "abcghijklmno";
	string str2 = "def";
	string str3 = str1 + str2;

	cout<<str3<<endl;
	char ch = 'x';
	str1 += ch;
	cout<<str1<<endl;
	//str.substr(startindex, j);
	//endindex = startindex + j - 1;
	string str4 = str1.substr(2, 4);
	string str5 = str1.substr(2);

	cout<<str4<<endl;
	cout<<str5<<endl;






	return 0;
}












