#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int N;
	cin >> N;
	//1st half
	for (int row = 1; row <= N; row = row + 1)
	{
		//spaces
		for (int space = 1; space <= N - row; space = space + 1)
		{
			cout << "  ";
		}
		// Triangle A
		for (int a = 1; a <= row; a = a + 1)
		{
			cout << a << " ";
		}
		// Triangle B

		for (int b = row - 1; b >= 1 ; b = b - 1 ) {

			cout << b << " ";
		}
		//next Line
		cout << endl;
	}
	//2nd half
	for (int row = N - 1; row >= 1; row = row - 1)
	{
		//spaces
		for (int space = 1; space <= N - row; space = space + 1)
		{
			cout << "  ";
		}
		// Triangle A
		for (int a = 1; a <= row; a = a + 1)
		{
			cout << a << " ";
		}
		// Triangle B

		for (int b = row - 1; b >= 1 ; b = b - 1 ) {

			cout << b << " ";
		}
		//next Line
		cout << endl;
	}

	return 0;
}