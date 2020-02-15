#include <iostream>
using namespace std;
string keypad[10] = {"+","abc","def","ghi","jkl","mno","pqrs","tuv","wx","yz"};

void keypadCombinations(string input, string output){
	if(input.length() == 0){
		cout<<output<<endl;
		return;
	}

	int ch = input[0] - '0';
	string str = keypad[ch];
	string ros = input.substr(1);

	for (int i = 0; i < str.length(); ++i)
	{
		char include = str[i];
		keypadCombinations(ros, output+include);
	}
}

int main(int argc, char const *argv[])
{
	string str;
	cin>>str;

	keypadCombinations(str,"");
	return 0;
}

// H.W -> implementation with char array





