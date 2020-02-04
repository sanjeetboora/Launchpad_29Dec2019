#include <iostream>
using namespace std;

void addX(string input, string output){
	if(input.length() == 0){
		cout<<output<<endl;
		return;
	}


	if(input.length()>= 2 && input[0] == 'x' && input[1] == 'x'){
		string osf = output+"x*";
		string ros = input.substr(1);
		addX(ros, osf);		
	}
	else{
		string osf = output + input[0];
		string ros = input.substr(1);
		addX(ros, osf);	
	}

}

int main(int argc, char const *argv[])
{
	string str;
	cin>>str;

	addX(str, "");


	return 0;
}