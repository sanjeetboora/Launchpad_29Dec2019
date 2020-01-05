
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int testCases;

	cin >> testCases;

	for (int i = 0; i < testCases; ++i)
	{
		int num;
		cin >> num;

		int count = 0;

		while (num > 0) {
			int result = num & 1;
			num = num >> 1;
			count = count + result;

		}
		cout << count << endl;
	}
	return 0;
}








