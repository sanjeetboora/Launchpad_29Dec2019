#include <bits/stdc++.h>
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
		//stars
		for (int star = 1; star <= (2 * row) - 1 ; star = star + 1)
		{
			cout << "* ";
		}
		//next line
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
		//stars
		for (int star = 1; star <= (2 * row) - 1 ; star = star + 1)
		{
			cout << "* ";
		}
		//next line
		cout << endl;
	}

	return 0;
}






