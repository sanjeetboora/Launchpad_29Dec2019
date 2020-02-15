#include <bits/stdc++.h>
using namespace std;

void codes(string input, string output){
	if(input.length() == 0){
		cout<<output<<endl;
		return;
	}

	int one = input[0] - '0';
	int two = 0;
	if(input.length() > 1){
		two = stoi(input.substr(0,2));
	}

	if(input.length()>1 && two <= 26){
		string ros = input.substr(1);
		char ch1 = one + 'a' - 1;
		codes(ros, output+ch1);

		ros = input.substr(2);
		char ch2 = two + 'a' -1;
		codes(ros, output+ch2);
	}
	else{
		string ros = input.substr(1);
		char ch1 = one + 'a' - 1;
		codes(ros, output+ch1);
	}

}

int main(int argc, char const *argv[])
{
	string str;
	cin>>str;

	codes(str,"");
	return 0;
}










