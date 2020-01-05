#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{

	int N;
	cin >> N;

	for (int row = 1; row <= N; row = row + 1)
	{

		//spaces

		for (int space = 1; space <= N - row; space = space + 1)
		{
			cout << "  ";
		}
		for (int star = 1; star <= (2 * row) - 1 ; star = star + 1)
		{
			cout << "* ";
		}

		cout << endl;
	}

	return 0;
}






