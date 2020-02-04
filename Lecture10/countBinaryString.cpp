#include <iostream>
using namespace std;

int countStrings(int n, string output) {
	if (n == 0) {
		return 1;
	}

	int len = output.length();
	int count = 0;
	if (output[len - 1] == '0') {
		count = countStrings(n - 1, output + "0") + 
				countStrings(n - 1, output + "1");

	} else {
		count = countStrings(n - 1, output + "0");
	}
	return count;
}

int main(int argc, char const *argv[])
{	int n;
	cin >> n;
	int result = countStrings(n - 1, "0") + 
				 countStrings(n - 1, "1");

	cout << result << endl;
	return 0;
}










